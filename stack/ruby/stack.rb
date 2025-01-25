require_relative 'node'

class Stack

    def initialize
        @top = nil
    end

    def push(data)
        new_node = Node.new(data)
        if @top != nil
            new_node.next_node = @top
        end

        @top = new_node
    end

    def pop 
        return nil if is_empty

        popped_node = @top
        @top = @top.next_node
        popped_node.data
    end

    def size
        count = 0
        current = @top 
        while current
            count += 1
            current = current.next_node
        end
        count
    end 

    def is_empty
        @top.nil?
    end

    def peek
        @top ? @top.data : nil
    end
end