require 'node'

class DoublyLinkedList: # https://www.geeksforgeeks.org/doubly-linked-list/
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def add_at_head:
        new_node = Node(val)
        if not self.head: # if the list is empty
            self.head = self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node
        self.size += 1

    def add_at_tail(self, val):
        new_node = Node(val)
        if not self.tail:
            self.head = self.tail = new_node
        else:
            new_node.prev = self.tail
            self.tail.next = new_node
            self.tail = new_node
        self.size += 1

    def add_at_index(self, index, val):
        if index < 0 or index > self.size:
            return
        if index == 0:
            self.add_at_head(val)
            return
        if index == self.size:
            self.add_at_tail(val)
            return

        new_node = Node(val)
        curr = self.head
        for _ in range(index - 1):
            curr = curr.next

        new_node.next = curr.next
        new_node.prev = curr
        curr.next.prev = new_node
        self.size += 1


    def delete_at_head(self):
        if not self.head: # empty list
            return
        if self.head == self.tail: # only one node
            self.head = self.tail = None
        else:
            self.head = self.head.next
            self.head.prev = None
        self.size -= 1

    def delete_at_tail(self):
        if not self.tail:
            return
        if self.head == self.tail:
            self.head = self.tail = None
        else:
            self.tail = self.tail.prev
            self.head.next = None
        self.size -= 1

    def traverse(self, direction="forward"):
        if direction == "forward":
            curr = self.head
            while curr:
                print(curr.val, end=" -> ")
                curr = curr.next
        else direction == "backward":
            curr = self.tail
            while curr:
                print(curr.val, end=" ->")
                curr = curr.prev
        else:
            print("Invalid direction. Use 'forward' or 'backward'.")
        print("None")
