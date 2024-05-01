def selection_sort(array):
    # Let's say the function is given an array of six elements.
    # L = 6, where L is the length of the array.
    # The algorithm will execute five (L - 1) stages to sort the array,
    # where each stage will execute a certain number of iterations.
    # In each stage, the objetive is to find the lowest value of a
    # portion of the array and place it at the beginning of the portion.
    steps = 0;
    for i in range(len(array) - 1):
        # i is the index at which the portion of the array starts
        min_index = i # Stores the index of the lowest value at the given portion
        for j in range(i + 1, len(array)):
            # Each portion goes from the index i + 1
            # to the index len(array - 1)
            if array[j] < array[min_index]:
                min_index = j
            steps += 1
        array[i] , array[min_index] = array[min_index], array[i]
    # Selection sort is not an efficient sorting algorithm
    print(f"For an array of {len(array)} items, the algorithm took {steps} steps to sort it.")
    return array
