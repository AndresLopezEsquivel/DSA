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

# Big O Complexity

The exact number of nodes in a binary tree is $2^h - 1$, where $h$ is the height of the tree. However, as $h$ increases, the $-1$ becomes insignificant, so the number of nodes is approximately $2^h$.

Let us look at this binary tree with height 3:

```
        1
       / \
      2   3
     / \ / \
    4  5 6  7
```
There are $2^3 \approx 8$ nodes in the tree and it takes 3 steps to reach, for instance, node 7.

In general, the worst-case time complexity of a binary tree is $O(n)$, where $n$ is the number of nodes in the tree, because in the worst case, we may have to visit all the nodes in the tree, something that can happen if the tree is a linked list.

Example:
```
        1
         \
          2
           \
            3
             \
              4
               \
                5
```

The best-case is a perfect binary tree, where the time complexity is $O(\log n)$, where $n$ is the number of nodes in the tree (as we can eliminate half of the nodes at each step).

Here, we are going to consideer the average case, where the time complexity is $O(\log n)$.

So, the operations of searching, inserting, and deleting in a binary search tree have an average time complexity of $O(\log n)$.
