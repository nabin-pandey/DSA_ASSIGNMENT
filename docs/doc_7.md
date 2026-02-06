# Q8 : Dijkstra's Shortest Path Algorithm

### a. Introduction
This program implements Dijkstra's algorithm to find the shortest path from a source vertex to all other vertices in a weighted graph. The graph is represented using an adjacency matrix, and the algorithm uses a greedy approach to compute minimum distances.

## b. Data Structures Definition

This program uses the following data structures:

### 1. Adjacency Matrix
- The graph is represented using a 2D array `graph[MAX_VERTICES][MAX_VERTICES]`.
- `graph[i][j]` stores the **weight of the edge from vertex `i` to vertex `j`**.
- A value of `0` indicates that **no edge exists**.
- Since `graph[i][j]` and `graph[j][i]` are treated independently, the graph can represent a **weighted directed graph**.

### 2. Distance Array
- The array 'dist[]' stores the **minimum distance from the source vertex to each vertex**.
- All values are initialized to `INT_MAX` except the source vertex.

### 3. Shortest Path Tree Set
- The array `sptSet[]` is used to track whether a vertex has been **processed (visited)**.
- A value of `1` indicates the vertex’s shortest distance is finalized.


# c. Description of Functions Implemented in the program

### `minDistance()`
**Purpose:**  
Finds and returns the index of the unvisited vertex with the minimum distance value from the source.

**Role:**  
This function supports the greedy selection step of Dijkstra’s algorithm.

---

### `printSolution()`
**Purpose:**  
Prints the shortest distance from the source vertex to every other vertex.

---

### `dijkstra()`
**Purpose:**  
Implements **Dijkstra’s Algorithm** for a weighted graph.

**Description:**  
The function repeatedly selects the nearest unvisited vertex, updates distances of adjacent vertices using edge weights, and finalizes shortest paths.

---

### `main()`
**Purpose:**  
Controls the program execution.

**Description:**  
- Accepts the number of vertices.
- Reads the adjacency matrix of the weighted graph.
- Takes the source vertex as input.
- Calls the `dijkstra()` function to compute shortest paths.

---

## (c) Overview of `main()` Method Organization

The `main()` method is organized as follows:
1. Input and validation of the number of vertices.
2. Input of the adjacency matrix representing the weighted graph.
3. Input and validation of the source vertex.
4. Invocation of Dijkstra’s algorithm.
5. Program termination after displaying output.

---

## (d) Sample Output

### Input
Input the number of vertices: 4
Input the adjacency matrix:
0 5 0 10
0 0 3 0
0 0 0 1
0 0 0 0
Input the source vertex: 0


### Output
Vertex Distance from Source
0 0
1 5
2 8
3 9


