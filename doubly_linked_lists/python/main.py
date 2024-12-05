from doubly_linked_list import DoublyLinkedList

def main():
    # create an empty DoublyLinkedList
    dll = DoublyLinkedList()

    print("Initial list:")
    dll.print_list()  # should print: None

    # test prepend
    print("\nTesting prepend...")
    dll.prepend(10)
    dll.prepend(20)
    dll.print_list()  # should print: 20 -> 10 -> None

    # test append
    print("\nTesting append...")
    dll.append(30)
    dll.append(40)
    dll.print_list()  # 20 -> 10 -> 30 -> 40 -> None

    # test insert
    print("\nTesting insert...")
    dll.insert(2, 25)  # insert 25 at index 2
    dll.print_list()  # should print: 20 -> 10 -> 25 -> 30 -> 40 -> None

    # test get
    print("\nTesting get...")
    print("Value at index 0:", dll.get(0).value)  # print: 20
    print("Value at index 2:", dll.get(2).value)  # print: 25
    print("Value at index 4:", dll.get(4).value)  # print: 40
    print("Value at invalid index 10:", dll.get(10))  # print: -1

    # test remove
    print("\nTesting remove...")
    dll.remove(2)
    dll.print_list()  # should print: 20 -> 10 -> 30 -> 40 -> None

    # test pop_first
    print("\nTesting pop_first...")
    dll.pop_first()
    dll.print_list()  # should print: 10 -> 30 -> 40 -> None

    # test pop_last
    print("\nTesting pop_last...")
    dll.pop_last()
    dll.print_list()  # should print: 10 -> 30 -> None

    # test edge cases
    print("\nTesting edge cases...")
    dll.pop_last()
    dll.pop_first()
    dll.pop_first()
    dll.print_list()

if __name__ == "__main__":
    main()
