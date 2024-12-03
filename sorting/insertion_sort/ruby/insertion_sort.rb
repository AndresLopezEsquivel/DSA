def insertion_sort(array)
  for i in 1...(array.length)
    # interval variable (i)
    j = i # decreases as we iterate over the sorted side of the array
    while j > 0
      if array[j-1] > array[j] # if the value to the left of j is > than its actual value
        # move the value to the right as many times as necessary
        temp = array[j]
        array[j] = array[j-1]
        array[j-1] = temp
      else
        break
      end
      j = j - 1
    end
  end

  array
end
