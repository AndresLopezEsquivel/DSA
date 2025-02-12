const Queue = require("./queue");

const queue = new Queue();
queue.enqueue(90);
queue.enqueue(85);
queue.enqueue(42);


console.log(queue.rear); // 3
console.log(queue.print()); // { '0': 90, '1': 85, '2': 42 }
console.log(queue.peek()); // 90

queue.dequeue();
console.log(queue.print()); // { '1': 85, '2': 42 }

queue.dequeue();
console.log(queue.print()); 
console.log(queue.isEmpty());

queue.dequeue();
console.log(queue.print()); 
console.log(queue.isEmpty());


