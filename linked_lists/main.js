import LinkedList from "./linked_list.js";

function testLinkedList() {
  const list = new LinkedList();
  console.log('initial list (should be empty):', list.display()); // []

  // TEST: append elements to the list
  list.append(10);
  list.append(20);
  list.append(30);
  console.log("After appending 10, 20, 30:", list.display());

  // TEST: find elements in the list!
  console.log("find 20 (should return node with data 20):", list.find(20));
  console.log("find 40 (should return null):", list.find(40)); // null

  // TEST: delete head element
  list.delete(10);
  console.log("After deleting 10 (head element):", list.display());

  // Delete a middle element
  list.append(40);
  list.append(50);
  console.log("After appending 40, 50:", list.display());
  list.delete(30);
  console.log("After deleting 30 (middle element):", list.display());

  // Delete last element
  list.delete(50);
  console.log("After deleting 50 (last element):", list.display()); // [20, 40]

  // Delete a non-existent element
  list.delete(60);
  console.log("After trying to delete 60 (non-existent element):", list.display()); // [20, 40])
}

testLinkedList(); // run 'node main.js' in the terminal to see tests
