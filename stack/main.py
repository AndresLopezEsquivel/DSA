from stack import Stack

if __name__ == "__main__":
    print("Push")
    stack = Stack(0)
    stack.push(1)
    stack.push(2)
    stack.push(3)
    stack.push(4)
    stack.print()
    print("Pop")
    print(stack.pop().value)
    print(stack.pop().value)
    print(stack.pop().value)
    print(stack.pop().value)
    print(stack.pop().value)
    print(stack.pop())
    print(stack.pop())
