#include <stdio.h>
#define SIZE 10

int graph[SIZE][SIZE];
int visit[SIZE];
int vertex[SIZE];

// Breadth First Search implementation
void bfs(int node)
{
    int q[SIZE], front = 0, rear = 0;
    int i, curr;

    for (i = 0; i < vertex; i++)
    {
        visit[i] = 0;

        visit[node] = 1;
        q[rear++] = node;

        printf("BFS Traversal: \n");

        while (front < rear)
        {
            curr = q[front++];
            printf("%d ", curr);

            for (i = 0; i < vertex; i++)
            {
                if (graph[curr][i] == 1 && visit[i] == 0)
                {

                    visit[i] = 1;
                    q[rear++] = i;
                }
            }
        }
        printf("\n");
    }
}

// Depth first Search implementation
void dfs(int node)
{
    int i;
    visit[node] = 1;
    printf("%d ", node);

    for (i = 0; i < vertex; i++)
    {
        if (graph[node][i] == 1 && visit[i] == 0)
        {
            dfs(i);
        }
    }
}

void main()
{

    int s, i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &vertex);

    printf("Enter adjacency matrix: \n");
    for (i = 0; i < vertex; i++)
    {
        for (j = 0; j < vertex; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &s);

    bfs(s);

    for (i = 0; i < vertex; i++)
    {
        visit[i] = 0;
    }

    printf("DFS Traversal: \n");
    dfs(s);
    printf("\n");
}