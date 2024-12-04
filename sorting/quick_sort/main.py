from quick_sort import quicksort

def main():
    unsorted_list = [33, 10, 68, 19, 42, 44, 27, 13]
    print("Unsorted list:", unsorted_list) # Expected output -> Unsorted list: [33, 10, 68, 19, 42, 44, 27, 13]

    quicksort(unsorted_list)
    print("Sorted list:", unsorted_list) # Expected output -> [10, 13, 19, 27, 33, 42, 44, 68]

if __name__ == "__main__":
    main()
