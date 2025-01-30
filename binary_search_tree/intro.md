# Binary Tree

* A full binary tree is a binary tree in which each node has exactly 0 or 2 children.
Example:
```
        1
       / \
      2   3
     / \
    4   5
```
* A perfect binary tree is a binary tree in which all interior nodes have two children and all leaves have the same depth or same level.
Example:
```
        1
       / \
      2   3
     / \ / \
    4  5 6  7
```
* A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled. It is filled from left to right with no gaps.
Example:
```
        1
       / \
      2   3
     / \ /
    4  5 6
```

Nodes without children are called leaves.

# Binary Search Tree

For a binary tree to be a binary search tree, the data of all the nodes in the left sub-tree of the root node should be less than the data of the root. The data of all the nodes in the right subtree of the root node should be greater than the data of the root. So, for a given node, all the nodes in the left subtree should be less than the given node and all the nodes in the right subtree should be greater than the given node.

Example:
```
        4
       / \
      2   6
     / \ / \
    1  3 5  7
```
