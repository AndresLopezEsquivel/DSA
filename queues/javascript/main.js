const Queue = require("./queue");

const queue = new Queue();
queue.enqueue(90);
queue.enqueue(85);
queue.enqueue(42);


console.log(queue.rear); // 3
console.log(queue.items); // { '0': 90, '1': 85, '2': 42 }
console.log(queue.front); // 2

queue.dequeue();
console.log(queue.items); // { '1': 85, '2': 42 }

