class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class Stack {
    constructor() {
        this.top = null
    }

    push(data) {
        const newNode = new Node(data);
        newNode.next = this.top;
        this.top = newNode;
    }

    pop() {
        if (!this.top) {
            return null
        }

        const poppedNode = this.top;
        this.top = this.top.next;
        return poppedNode.data;
    }

    peek() {
        return this.top ? this.top.data : null;
    }

    printStack() {
        let current = this.top;
        let result = []
        while (current) {
            result.push(current.data);
            console.log(current.data);
            current = current.next;
        }

        return result;
    }
}

module.exports = Stack;