from node import Node

class LinkedList:

    def __init__(self, value):
        new_node = Node(value = value)
        self.head = new_node
        self.tail = new_node
        self.length = 1

    def is_empty(self):
        return not self.head and not self.tail

    def print_list(self):
        current = self.head
        while current:
            print(current.value)
            current = current.next

    def append(self, value):
        new_node = Node(value = value)
        if not self.is_empty():
            self.tail.next = new_node
            self.tail = new_node
        else:
            self.head = new_node
            self.tail = new_node
        self.length += 1

    def pop(self):

        if self.is_empty():
            return None

        if self.head is self.tail: # or self.length == 1
            value = self.head.value # or self.tail.value
            self.head = None
            self.tail = None
            self.length -= 1
            return value

        tmp = self.head
        while tmp.next is not self.tail:
            tmp = tmp.next
        value = tmp.next.value
        self.tail = tmp
        self.tail.next = None
        self.length -= 1

        return value
