require_relative 'bubble_sort'

if __FILE__ == $0
  arr = [5, 3, 8, 4, 2, 100, 94, 1, 9, 11, 39]
  puts "Original Array: #{arr}"
  sorted_arr = bubble_sort(arr)
  puts "Sorted Array: #{sorted_arr}"
end
