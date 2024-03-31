from binary_search_tree import BinarySearchTree

if __name__ == "__main__":
    bst = BinarySearchTree()
    print(bst.insert(0))
    print(bst.insert(-1))
    print(bst.insert(1))

    print()
    print(bst.root.value)
    print(bst.root.left.value)
    print(bst.root.right.value)

    print()
    print(bst.contains(0))
    print(bst.contains(-1))
    print(bst.contains(1))
    print(bst.contains(2))
    print(bst.contains(-2))

    print()
    print(bst.insert(-2))
    print(bst.insert(2))
    print(bst.contains(2))
    print(bst.contains(-2))

    print()
    print(bst.root.left.left.value)
