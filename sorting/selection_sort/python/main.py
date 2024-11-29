from selection_sort import selection_sort

if __name__ == "__main__":
    array = [4, 2, 6, 5, 1, 3, 12, 0, 2]
    print(f"Before sorting: {array}")
    selection_sort(array) # Pass by object reference
    print(f"After sorting: {array}")
