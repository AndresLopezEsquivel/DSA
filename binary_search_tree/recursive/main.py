from binary_search_tree import BinarySearchTree

if __name__ == "__main__":
    bst = BinarySearchTree()
    bst.insert(47)
    bst.insert(21)
    bst.insert(76)
    bst.insert(18)
    bst.insert(27)
    bst.insert(52)
    bst.insert(82)

    print("BFS: ")
    print(bst.bfs())

    print("DFS pre-order: ")
    print(bst.dfs_pre_order())

    print("DFS post-order: ")
    print(bst.dfs_post_order())

    print("DFS in-order: ")
    print(bst.dfs_in_order())

    print("BST contains 27:")
    print(bst.contains(27))

    print("BST contains 17:")
    print(bst.contains(17))

    bst.delete(76)

    print("BST contains 76: ")
    print(bst.contains(76))
