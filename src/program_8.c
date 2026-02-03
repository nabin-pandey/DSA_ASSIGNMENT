// WAP that generates a list of N random integers in the range [1, 1000]. User choose the sorting algorithm on their own.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparison, swap;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        comparison++;
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        swap++;
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
        swap++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
        swap++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            comparison++;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            comparison++;
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // swap only if needed
        if (min_idx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            swap++;
        }
    }
}

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            comparison++;
            arr[j + 1] = arr[j];
            swap++;
            j--;
        }
        if (j >= 0)
            comparison++;
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int choice, n, i;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n];
    int originalArr[n];

    srand(time(0));
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000 + 1;
        originalArr[i] = arr[i];
    }

    printf("\nChoose the sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nBefore sorting:\n");
    printArray(originalArr, n);

    comparison = 0;
    swap = 0;

    switch (choice)
    {
    case 1:
        bubbleSort(arr, n);
        printf("\nUsing Bubble Sort\n");
        break;
    case 2:
        selectionSort(arr, n);
        printf("\nUsing Selection Sort\n");
        break;
    case 3:
        insertionSort(arr, n);
        printf("\nUsing Insertion Sort\n");
        break;
    case 4:
        mergeSort(arr, 0, n - 1);
        printf("\nUsing Merge Sort\n");
        break;
    default:
        printf("Invalid choice!\n");
        return 1;
    }

    printf("\nAfter sorting:\n");
    printArray(arr, n);

    printf("\nTotal comparisons: %d\n", comparison);
    printf("Total swap: %d\n", swap);

    return 0;
}