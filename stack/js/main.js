const Stack = require("./stack");

const stack = new Stack();
stack.push(104904);
stack.push(1349804);
stack.push(3908);

console.log("Stack elements ->", stack.printStack());
console.log("Popped element:", stack.pop());
console.log("Stack after pop: ", stack.printStack());
console.log("Peek element:", stack.peek());
