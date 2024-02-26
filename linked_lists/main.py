from linked_list import LinkedList

if __name__ == "__main__":
    linked_list_1 = LinkedList(value = 1)

    # linked_list_1.append(value = 2)
    # linked_list_1.append(value = 3)
    # linked_list_1.append(value = 4)

    linked_list_1.print_list()

    print('\nPopped: ', linked_list_1.pop())
    linked_list_1.print_list()
    print('\nPopped: ', linked_list_1.pop())
