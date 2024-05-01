from bubble_sort import bubble_sort

if __name__ == "__main__":
    array = [4, 2, 6, 5, 1, 3, 12, 0, 2]
    print(f"Before sorting: {array}")
    bubble_sort(array) # Pass by object reference
    print(f"After sorting: {array}")
