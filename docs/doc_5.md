# Q5 Graph Traversal using BFS and DFS graphacency Matrix

## a. Introduction
The objective of this program is to implement **graph traversal techniques** — Breadth First Search (BFS) and Depth First Search (DFS) — on a graph represented using an graphacency matrix.

---

## b. Data Structure Used

### Graph Representation
- The graph is represented using an graphacency matrix.
- A 2D array `graph[SIZE][SIZE]` is used where:
  - `graph[i][j] = 1` indicates an edge between vertex `i` and vertex `j`
  - `graph[i][j] = 0` indicates no edge
- The graph supports up to `SIZE` vertices.

### Supporting Arrays
- `visit[SIZE]`  
  Used to keep track of visited vertices during traversal.

---

## c. Breadth First Search (BFS)

### Introduction
Breadth First Search is a traversal technique that explores the graph level by level, starting from a given source vertex.

### Characteristics
- Uses a queue as method
- Visits all graphacent vertices before moving deeper
- Suitable for finding shortest paths in unweighted graphs

### Algorithm
1. Initialize all vertices as unvisited.
2. Mark the starting vertex as visited and insert it into the queue.
3. Remove a vertex from the queue and visit it.
4. Insert all unvisited graphacent vertices into the queue.
5. Repeat until the queue is empty.

---

## d. Depth First Search (DFS)

### IIntroduction
Depth First Search is a traversal technique that explores a vertex and then recursively explores its graphacent vertices as deeply as possible before backtracking.

### Characteristics
- Uses recursion
- Traverses deep paths before exploring other branches

### Algorithm
1. Mark the current vertex as visited.
2. Visit the vertex.
3. Recursively apply DFS to all unvisited graphacent vertices.


## e. main() function Overview :

### Program Explanation

- The program accepts the **number of vertices** from the user.
- The **graphacency matrix** is entered dynamically.
- The user specifies the **starting vertex**.
- BFS traversal is performed first.
- The visited array is reset.
- DFS traversal is then performed from the same starting vertex.



### Input Format

- Number of vertices `n`
- `n × n` graphacency matrix
- Starting vertex


## f. Output

- BFS traversal order
- DFS traversal order


Sample output:
BFS Traversal: 0 1 2 3
DFS Traversal: 0 1 3 2
