def bubble_sort(array)
  loop do
    # This variable is used to track if any swap has been made
    # If the algorithm goes through the array without making any swap, it means that the array is already sorted
    swapped = false

    (0...array.length - 1).each do |i|
      if array[i] > array[i + 1]
        array[i], array[i + 1] = array[i + 1], array[i]
        swapped = true
      end
    end

    break unless swapped
  end

  array
end
