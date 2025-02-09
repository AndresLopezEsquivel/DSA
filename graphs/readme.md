# Graphs

## Vertex

A vertex is a node in a graph.

## Edge

An edge is a connection between two vertices.

### Weighted Graph

A weighted graph is a graph in which each edge has a weight.

### Directed Graph

A directed graph is a graph in which each edge has a direction.

### Undirected Graph

An undirected graph is a graph in which each edge has no direction. The edges are bidirectional.

## Adjacency Matrices and Lists

An adjacency matrix is a 2D array of size `V x V` where `V` is the number of vertices in a graph. Let the 2D array be `adj[][],` a slot `adj[i][j] = 1` indicates that there is an edge from vertex `i` to vertex `j`. Adjacency matrix for undirected graph is always symmetric. Adjacency Matrix is also used to represent weighted graphs. If `adj[i][j] = w`, then there is an edge from vertex `i` to vertex `j` with weight `w`.

Here is an example of a weighted graph with four vertices (A, B, C, D):

```
    A
   / \
 50   75
 /     \
B       C
 \     /
  60  80
   \ /
    D
```

Here is an example of an adjacency matrix for the weighted graph above:

|   | A | B | C | D |
|---|---|---|---|---|
| A | 0 | 50| 75| 0 |
| B | 50| 0 | 0 | 60|
| C | 75| 0 | 0 | 80|
| D | 0 | 60| 80| 0 |

On the other hand, an adjacency list is an array of lists. The size of the array is equal to the number of vertices. Let the array be an array[]. An entry array[i] represents the list of vertices adjacent to the `i`th vertex. This representation can also be used to represent a weighted graph. The weights of edges can be stored in the nodes of the linked list.

Here is an example of an adjacency list for the weighted graph above:

```
A -> B(50), C(75)
B -> A(50), D(60)
C -> A(75), D(80)
D -> B(60), C(80)
```

The space complexity of an adjacency matrix is `O(V^2)` while the space complexity of an adjacency list is `O(V + E)` where `V` is the number of vertices and `E` is the number of edges in the graph.

For adding a vertex, the time complexity of an adjacency matrix is `O(V^2)` (since we have to add a new row and a new column) while the time complexity of an adjacency list is `O(1)`. For adding an edge, either case has a time complexity of `O(1)`. For removing a vertex, the time complexity of an adjacency matrix is `O(V^2)` (since we have to remove a row and a column) while the time complexity of an adjacency list is `O(V)`. For removing an edge, either case has a time complexity of `O(1)`.
