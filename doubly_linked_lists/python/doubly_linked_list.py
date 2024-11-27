from node import Node

class DoublyLinkedList: # https://www.geeksforgeeks.org/doubly-linked-list/
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def print_list(self):
        curr = self.head
        while curr: # loop until curr is None
            print(curr.value, end=" -> ")
            curr = curr.next
        print("None")

    def prepend(self, value): # add at head
        new_node = Node(value)
        if not self.head: # Is empty
            self.head = self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node
        self.size += 1

    def append(self, value): # add at tail
        new_node = Node(value)
        if not self.tail:
            self.head = self.tail = new_node
        else:
            new_node.prev = self.tail
            self.tail.next = new_node
            self.tail = new_node
        self.size += 1

    def insert(self, index, value): # add at index
        if index < 0 or index > self.size:
            return
        if index == 0:
            self.prepend(value)
            return
        if index == self.size:
            self.append(value)
            return

        new_node = Node(value)
        curr = self.head
        for _ in range(index - 1):
            curr = curr.next

        new_node.next = curr.next
        new_node.prev = curr
        curr.next.prev = new_node # adjust the next node's prev pointer
        curr.next = new_node # adjust the current node's next pointer
        self.size += 1

    def pop_first(self): # delete at head
        if not self.head: # empty list
            return
        if self.head == self.tail: # only one node
            self.head = self.tail = None
        else:
            self.head = self.head.next
            self.head.prev = None
        self.size -= 1

    def pop_last(self): # delete at tail
        if not self.tail:
            return
        if self.head == self.tail:
            self.head = self.tail = None
        else:
            self.tail = self.tail.prev
            self.tail.next = None
        self.size -= 1

    def remove(self, index):
        if index < 0 or index > self.size:
            return
        if index == 0:
            self.pop_first()
            return
        if index > self.size:
            self.pop_last()
            return

        curr = self.head
        for _ in range(index):
            curr = curr.next

        curr.prev.next = curr.next # adjust the prev node's next pointer
        if curr.next:
            curr.next.prev = curr.prev # adjust the next node's prev pointer
        self.size -= 1

    def get(self, index):
        if index < 0 or index >= self.size: # validate index
            return -1

        if index < self.size // 2: # 1st half of the list
            curr = self.head
            for _ in range(index):
                curr = curr.next
        else: # 2nd half of the list
            curr = self.tail
            for _ in range(self.size - 1, index, -1):
                curr = curr.prev

        return curr.value
