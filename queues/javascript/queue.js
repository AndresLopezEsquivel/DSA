class Queue {
    constructor() {
        this.items = {}
        this.rear = 0
        this.front = 0
    }
    
    print() {
        return this.items
    }

    // The enqueue() method adds an element to the back (rear) of the queue.
    enqueue(element) {
        this.items[this.rear] = element;
        this.rear++;
    }

    dequeue() {
        if (this.isEmpty()) {
            return null;
        }

        const item = this.items[this.front];
        delete this.items[this.front];
        this.front++;
        return item;
    }

    isEmpty() {
        return this.front === this.rear;
    }

    // Returns the front element without removing it.
    peek() {
        return this.isEmpty() ? null : this.items[this.front];
    }
}

module.exports = Queue;