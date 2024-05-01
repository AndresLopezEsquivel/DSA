def insertion_sort(array):
    steps = 0
    for i in range(1, len(array)): # We'll start at the second index
        tmp = array[i]
        j = i - 1 # Previous index
        while tmp < array[j] and j > -1: # While the previous element is greater than the current
            array[j + 1] = array[j]
            array[j] = tmp
            j -= 1
            steps += 1
        steps += 1
    print(f"For an array of {len(array)} items, the algorithm took {steps} steps to sort it.")
    return array
