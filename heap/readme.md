# Heaps

A heap is a binary tree with the following properties:
- It is a complete binary tree (all levels are completely filled except possibly for the last level, which is filled from left to right with no gaps).
- Duplicate values are allowed.
- The value of each node is greater than or equal to the values of its children if it is a max-heap, or less than or equal to the values of its children if it is a min-heap.
- In a max-heap, the root node is the largest element in the tree, while in a min-heap, the root node is the smallest element in the tree.

We can use a vector to represent a heap. The root node is at index 1, and the children of the node at index i are at indices 2i and 2i + 1. The parent of the node at index i is at index i / 2 (integer division).

Example of a max-heap:
```
    10
   /  \
  9    8
 / \  / \
7  6 5   4
```

max-heap as vector: `[10, 9, 8, 7, 6, 5, 4]`
