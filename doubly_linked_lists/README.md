# Doubly Linked List
a Doubly Linked List (DDL) is a type of linked data structure that consists on a series of nodes. Each node contains three key components: 
1. Data: The value or data that the node holds.
2. Pointer to the next node: A reference to the next node in the sequence.
3. Pointer to the previous node: A reference to the previous node in the sequence.

   Note: this structure allows traversal of the list in both forward and backward directions, unlike a singly linked list, which can only be traversed in one direction.

   ## Key Features:
   - Bi-directional Traversal: You can move through the list both from the head to the tail and from the tail to the head.
   - Dynamic Size: Nodes can be easily added or removed without reallocation or reorganization of the entire list.
   - Efficient Deletion/Insertion: Operations like inserting or deleting a node are more efficient compared to arrays, especially when working in the middle of the list.
     ### Structure of a Node:
     [ Previous | Data | Next ]

## Advantages:

- Allows traversal in both directions.
- Simplifies the deletion of a node as it doesn't require traversal from the head to find the previous node.

## Disadvantages:
- Uses more memory due to the extra pointer (to the previous node).
- Slightly more complex to implement compared to a singly linked list.

## Example Use Cases:
- Undo/Redo Functionality in editors or applications.
- Navigation systems, such as browser history.
