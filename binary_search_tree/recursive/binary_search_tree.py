from node import Node

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def contains(self, value):
        return self.__contains(self.root, value)

    def __contains(self, node, value):
        if node is None:
            return False
        if node.value == value:
            return True
        tmp = node.left if value < node.value else node.right
        return self.__contains(tmp, value)

    def insert(self, value):
        if self.root is None:
            self.root = Node(value)
        else:
            self.__insert(self.root, value)

    def __insert(self, curr_node, value):
        if curr_node is None:
            return Node(value)
        if value < curr_node.value:
            curr_node.left = self.__insert(curr_node.left, value)
        if value > curr_node.value:
            curr_node.right = self.__insert(curr_node.right, value)
        # If both conditions are not sastified, then curr_node.value == value
        # So, there's nothing to do because duplicates cannot exist in a BST
        return curr_node

    def delete(self, value):
        self.__delete(self.root, value)

    def __delete(self, curr_node, value):
        if curr_node is None:
            return None # When value doesn't exist in the BST
        if value < curr_node.value: # Keep looking to the left
            curr_node.left = self.__delete(curr_node.left, value)
        elif value > curr_node.value: # Keep looking to the right
            curr_node.right = self.__delete(curr_node.right, value)
        else: # When curr_node.value == value (we found the value to be removed)
            if curr_node.left is None and curr_node.right is None: # The node to be removed doesn't have children
                return None # The parent of curr_node won't point to it anymore (it is garbage collected)
            elif curr_node.left is None: # The node to be removed only has a right child
                curr_node = curr_node.right # Now, the right child takes the place of the removed node
            elif curr_node.right is None: # The node to be removed only has a left child
                curr_node = curr_node.left # Now, the right child takes the place of the removed node
            else: # The node to be removed has both left and right children
                min_val = self.min_value(curr_node.right) # Find the minimun value of the right side of curr_node
                curr_node.value = min_val # The value to be removed is now replaced by min_val
                curr_node.right = self.__delete(curr_node.right, min_val) # Removes the duplicate node whose value is min_val
        return curr_node

    def min_value(self, tmp_node):
        # Returns the minimun value of a BST whose root is initially provided at tmp_node
        while tmp_node.left is not None:
            tmp_node = tmp_node.left
        return tmp_node.value

    # This is my first implementation of a recursive insert function
    # for a binary search tree

    # def insert(self, value):
    #     # Returns True if the new node was succesfully inserted
    #     # Returns False if the value to be inserted already exists

    #     if self.root is None:
    #         self.root = Node(value)
    #         return True

    #     if self.root.value == value:
    #         return False
    #     elif value < self.root.value:
    #         if self.root.left is None:
    #             self.root.left = Node(value)
    #             return True
    #         return self.__insert(self.root.left, value)
    #     else:
    #         if self.root.right is None:
    #             self.root.right = Node(value)
    #             return True
    #         return self.__insert(self.root.right, value)

    # def __insert(self, tmp, value):
    #     if tmp.value == value:
    #         return False
    #     elif value < tmp.value:
    #         if tmp.left is None:
    #             tmp.left = Node(value)
    #             return True
    #         return self.__insert(tmp.left, value)
    #     else:
    #         if tmp.right is None:
    #             tmp.right = Node(value)
    #             return True
    #         return self.__insert(tmp.right, value)
