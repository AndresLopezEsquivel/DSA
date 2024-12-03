def insertion_sort(array) # https://www.youtube.com/watch?v=i-SKeOcBwko
  for i in 1...(array.length)
    value = array[i] # the value to insert
    temp = i # determines where the held value will eventually end up
    while temp > 0 && array[temp - 1] > value
      array[temp] = array[temp - 1]
      temp = temp - 1
    end
    array[temp] = value
  end
  array
end
