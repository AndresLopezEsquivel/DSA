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
        if (this.top == null) {
            return null
        }

        const poppedNode = this.top;
        this.top = this.top.next;
        return poppedNode.data;
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