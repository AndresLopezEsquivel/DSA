class Queue {
    constructor() {
        this.items = {}
        this.rear = 0
        this.front = 0
    }

    // The enqueue() method adds an element to the back (rear) of the queue.
    enqueue(element) {
        this.items[this.rear] = element;
        this.rear++
    }
}

module.exports = Queue;