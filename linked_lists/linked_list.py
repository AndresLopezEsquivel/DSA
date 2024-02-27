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
        return True

    def pop(self):

        if self.is_empty():
            return None

        if self.head is self.tail: # or self.length == 1
            tmp = self.head # or self.tail
            self.head = None
            self.tail = None
            self.length -= 1
            return tmp

        tmp = self.head
        while tmp.next is not self.tail:
            tmp = tmp.next
        self.tail = tmp
        self.tail.next = None
        self.length -= 1

        return tmp.next

    def prepend(self, value):
        new_node = Node(value = value)
        new_node.next = self.head
        if self.is_empty():
            self.tail = new_node
        self.head = new_node
        self.length += 1
        return True

    def pop_first(self):

        if self.is_empty():
            return None
        tmp = self.head
        self.head = self.head.next
        if self.head is self.tail:
            self.tail = None
        tmp.next = None
        self.length -= 1
        return tmp

    def get(self, idx):
        # Returns the node at the specified index
        if idx < 0 or idx > self.length - 1:
            return None

        if self.is_empty():
            return None

        i = 0
        node = self.head
        while i != idx:
            node = node.next
            i += 1

        return node

    def set_value(self, idx, value):
        # Sets a new value for the node with index idx
        node = self.get(idx = idx)
        if node:
            node.value = value
            return True
        return False

    def insert(self, idx, value):
        # Inserts a new node at a given index
        if idx < 0 or idx > self.length or self.is_empty():
            return False

        if idx == 0:
            self.prepend(value = value)
        elif idx == self.length:
            self.append(value = value)
        else:
            prev_node = self.get(idx = idx - 1)
            if prev_node:
                new_node = Node(value = value)
                new_node.next = prev_node.next
                prev_node.next = new_node
        self.length += 1
        return True

    def remove(self, idx):
        # Removes node at a given index
        node = None
        if idx < 0 or idx >= self.length or self.is_empty():
            return node
        if idx == 0:
            node = self.pop_first()
        elif idx == self.length - 1:
            node = self.pop()
        else:
            prev_node = self.get(idx = idx - 1)
            if prev_node:
                # tmp is the node to be removed
                tmp = prev_node.next
                node = tmp
                prev_node.next = tmp.next
                tmp.next = None
        self.length -= 1
        return node

    def reverse(self):
        if self.is_empty():
            return False

        tmp = self.head
        self.head = self.tail
        self.tail = tmp

        after = tmp.next
        before = None

        while not self.head.next:
            after = tmp.next
            tmp.next = before
            before = tmp
            tmp = after
