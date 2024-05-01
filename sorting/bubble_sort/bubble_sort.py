def bubble_sort(array):
    steps = 0
    # Bubble sort bubbles up the elements depending
    # on the sorting criteria (ascending or descending)
    # This function implements ascending sorting
    for j in range(len(array) - 1, 0, -1):
        # j keeps track of the number of comparisons.
        # Let's say the function receives an array of six items.
        # In the first pass through the array, there will be necessary 5 steps
        # to bubble up the max value to the end of the array.
        # In the second pass, 4 steps will be necessary to bubble
        # up the second greatest value, and so on.
        for i in range(j):
            # i keeps track of the indexes of the items we are iterating
            if array[i] > array[i + 1]:
                array[i], array[i + 1] = array[i + 1], array[i]
            steps += 1 # To know how many steps the algorithm takes to sort the array
    # Bubble sort is not an efficient sorting algorithm because we are
    # executing all the possible comparisons.
    print(f"For an array of {len(array)} items, the algorithm took {steps} steps to sort it.")
    return array
