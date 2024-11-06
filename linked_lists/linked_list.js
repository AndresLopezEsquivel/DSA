import Node from './node.js'

class LinkedList {
  constructor() {
    this.head = null; // the head is a reference to the first node in the linkedList
  }

  append(data) {
    const newNode = new Node(data); // create a new node to add to the list
    if (!this.head) {
      this.head = newNode; // if the list is empty, newNode becomes the head
    } else {
      let current = this.head; // start from the head

      // traverse to the last node by following the next pointers
      while (current.next) {
        current = current.next;
      }
      current.next = newNode; // set the new node as the last node's next pointer.
    }
  }

  // The display() method gathers all data from each node in the linked list and returns them as an array.
  display() {
    const elements = []; // array to hold all node data
    let current = this.head; // set up the head as the pointer
    while (current) { // loop until current is null (end of the list)
      elements.push(current.data); // add the current node's data to the array
      current = current.next; // move to the next node
    }
    return elements; // return the collected data as an array
  }

  // The find() method searches for a node containing a specific data value
  // if the node is found, it returns the node; otherwise, it returns null
  find(data) {
    let current = this.head; // start from the head
    while (current) {
      if (current.data === data) { // check if the current node contains the data
        return current; // return the Node if found
      }
      current = current.next
    }
    return null;
  }

  delete(data) {
    // check if the list is empty
    if (!this.head) return;

    // if the head contains the data, remove it by setting head to the next node
    if (this.head.data === data) {
      this.head = this.head.next; // remove the head node
    }

    // traverse the list to find the node just before the Target Node
    let current = this.head;
    while (current.next && current.next.data !== data) { // loop until the next node contains the target data or reaches the end
      current = current.next;
    }

    // if the target node is found, delete it by adjusting the next pointer
    if (current.next) {
      current.next = current.next.next; // skip the Target Node by linking to the node after it.
    }
  }
}

export default LinkedList;
