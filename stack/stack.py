from node import Node

class Stack:
    def __init__(self, value):
        self.top = Node(value)
        self.height = 1

    def print(self):
        tmp = self.top
        while tmp is not None:
            print(tmp.value)
            tmp = tmp.next

    def push(self, value):
        new_node = Node(value)
        if self.top is not None:
            new_node.next = self.top
        self.top = new_node
        self.height += 1

    def pop(self):
        if self.top is None:
            return None
        top_node = self.top
        self.top = self.top.next
        top_node.next = None
        self.height -= 1
        return top_node
