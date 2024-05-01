from insertion_sort import insertion_sort

if __name__ == "__main__":
    # array = [7, 6, 5, 4, 3, 2, 1]
    array = [1, 2, 4, 3, 5, 6]
    print(f"Before sorting: {array}")
    insertion_sort(array) # Pass by object reference
    print(f"After sorting: {array}")
