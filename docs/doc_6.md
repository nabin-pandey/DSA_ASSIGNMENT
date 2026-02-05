# Q6 : Build Min Heap and Max Heap from Unsorted Array (C)

## a. Introduction
This project is a simple C program that takes an **unsorted array of integers** and builds:
- a **Min Heap**
- a **Max Heap**

The goal is to show how heap building works using **easy, beginner-friendly functions** and **array-based heap representation**.

---

## b. Data Structure Definition: Heap
A **Heap** is a special tree structure called a **Complete Binary Tree** (all levels filled from left to right) that follows a specific rule:

### Min Heap
- The **smallest element** is at the root.
- For every node: `parent <= child`

So, the minimum element is always found at index `0`.

### Max Heap
- The **largest element** is at the root.
- For every node: `parent >= child`

So, the maximum element is always found at index `0`.

### Array Representation (0-based indexing)
If a node is at index `i`, then:
- Left child  = `2*i + 1`
- Right child = `2*i + 2`
- Parent      = `(i - 1) / 2`

---

## c. Functions Implemented

### `swapNumbers(int *a, int *b)`
Swaps two integer values using a temporary variable.

### `heapifyMin(int arr[], int n, int i)`
Fixes the **Min Heap rule** for the node at index `i`.
- Finds the smallest among (parent, left child, right child)
- Swaps if needed
- Calls itself again until the heap becomes valid

### `heapifyMax(int arr[], int n, int i)`
Fixes the **Max Heap rule** for the node at index `i`.
- Finds the largest among (parent, left child, right child)
- Swaps if needed
- Calls itself again until the heap becomes valid

### `buildMinHeap(int arr[], int n)`
Builds a complete **Min Heap** from an unsorted array by calling `heapifyMin()` from:
- the last non-leaf node to the root

### `buildMaxHeap(int arr[], int n)`
Builds a complete **Max Heap** from an unsorted array by calling `heapifyMax()` from:
- the last non-leaf node to the root

### `printArray(int arr[], int n)`
Prints the elements of an array (heap) in one line.

---

## d.  `main()` Function Overview
The `main()` function does these steps:

1. Reads `n` (number of elements)
2. Inputs the unsorted array into `original[]`
3. Copies `original[]` into:
   - `minHeap[]`
   - `maxHeap[]`
4. Builds heaps:
   - `buildMinHeap(minHeap, n)`
   - `buildMaxHeap(maxHeap, n)`
5. Prints:
   - Original Array
   - Min Heap Array
   - Max Heap Array

---

## e. Sample Output

Original Array: 10 3 8 5 2 7
Min Heap Array: 2 3 7 5 10 8
Max Heap Array: 10 5 8 3 2 7
