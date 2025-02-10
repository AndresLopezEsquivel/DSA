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