from node import Node
# Check this page to know more about object identity:
# https://realpython.com/python-is-identity-vs-equality/
class Queue:
    def __init__(self, value):
        new_node = Node(value)
        self.first = new_node
        self.last = new_node
        self.length = 1

    def print(self):
        tmp = self.first
        while tmp is not None:
            print(tmp.value)
            tmp = tmp.next

    def enqueue(self, value):
        new_node = Node(value)
        if self.first is None and self.last is None:
            self.first = new_node
            self.last = new_node
        else:
            self.last.next = new_node
            self.last = new_node
        self.length += 1

    def dequeue(self):
        if self.first is None and self.last is None: # The stack is empty
            return None
        first = self.first
        if self.first is self.last:
            self.first = None
            self.last = None
        else:
            self.first = self.first.next
            first.next = None
        self.length -= 1
        return first
