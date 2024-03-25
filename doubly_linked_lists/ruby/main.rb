require_relative "doubly_linked_list"

list = DoublyLinkedList.new(0)

list.append(1)
list.append(2)
list.append(3)
list.prepend(-1)
list.prepend(-2)
list.prepend(-3)

puts "List:"
list.print_list
# -3
# -2
# -1
# 0
# 1
# 2
# 3

puts
p "pop = #{list.pop.value}" # "pop = 3"
p "pop_first = #{list.pop_first.value}" # "pop_first = -3"

puts
puts "List:"
list.print_list
# List:
# -2
# -1
# 0
# 1
# 2

puts
p "get(0).value = #{list.get(0).value}" # "get(0).value = -2"
p "get(4).value = #{list.get(4).value}" # "get(4).value = 2"
p list.get(-1) # nil
p list.get(5) # nil

list.insert(2, 100)
list.insert(3, 200)

puts
puts "List:"
list.print_list
# List:
# -2
# -1
# 100
# 200
# 0
# 1
# 2

list.remove(2)
list.remove(2)

puts
puts "List:"
list.print_list

# List:
# -2
# -1
# 0
# 1
# 2
