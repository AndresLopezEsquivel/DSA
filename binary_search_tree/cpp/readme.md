# Binary Search Tree in C++
## Output of the program
```
node1 == node2: false
node1 == node3: true
node1 < node2: true
node1 < node3: false
node1 > node2: false
node1 > node3: false
node3 > node1: false

└──5
    ├──7
    └──3
        ├──4
        └──2

└──5
    ├──7
    │   ├──8
    │   │   ├──9
    │   └──6
    └──3
        ├──4
        └──2
            └──1

bst.contains(5): true
bst.contains(3): true
bst.contains(7): true
bst.contains(100): false
bst.contains(0): false
```
