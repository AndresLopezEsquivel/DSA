require_relative 'stack'

class Main
    stack = Stack.new
    # Add elements to stack 
    stack.push(10)
    stack.push(12)
    stack.push(45)

    # See the peek element 
    puts "The element at the top is: #{stack.peek}"

    # See stack size 
    puts "The stack size is: #{stack.size}"

    # Remove the top element
    puts "The removed element is #{stack.pop}"

    # Check if stack is empty
    puts "Is the stack empty? #{stack.is_empty ? 'Yes' : 'No'}"
    stack.pop
    stack.pop
    puts "Is the stack empty? #{stack.is_empty ? 'Yes' : 'No'}"
end