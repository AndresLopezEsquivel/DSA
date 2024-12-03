require_relative 'insertion_sort'

if __FILE__ == $0
  array = [5, 3, 8, 4, 2, 94, 1, 9, 11]
  puts "Original Array: #{array}"
  new_array = insertion_sort(array)
  puts "After insertion sorting: #{new_array}"
end
