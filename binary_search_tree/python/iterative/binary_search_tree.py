from node import Node

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def contains(self, value):
        # O(log N)
        if self.root is None:
            return False

        tmp = self.root
        while tmp is not None:
            if tmp.value == value:
                return True
            tmp = tmp.left if value < tmp.value else tmp.right
        return False

    def insert(self, value):
        # We are using divide and conquer
        # Omega (best case) and Theta (average case) are both (log n).
        # However, worst case is O(n) and Big O measures worst case.
        # Typically treat Binary Search Trees as O(log n) although they are O(n).
        new_node = Node(value)

        if self.root is None:
            self.root = new_node
            return True

        tmp = self.root
        while True:
            if tmp.value == new_node.value:
                return False
            elif new_node.value < tmp.value:
                if tmp.left is None:
                    tmp.left = new_node
                    return True
                tmp = tmp.left
            else:
                if tmp.right is None:
                    tmp.right = new_node
                    return True
                tmp = tmp.right
