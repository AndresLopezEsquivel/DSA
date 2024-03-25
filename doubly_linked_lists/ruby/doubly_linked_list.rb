require_relative 'node'

class DoublyLinkedList
  attr_reader :head, :tail, :length

  def initialize(value)
    first_node = Node.new(value)
    @head = first_node
    @tail = first_node
    @length = 1
  end

  def print_list
    curr = @head
    until curr.nil?
      puts curr.value
      curr = curr.next
    end
  end

  def append(value)
    new_node = Node.new(value)
    if !@head && !@tail
      @head = new_node
    else
      @tail.next = new_node
      new_node.prev = @tail
    end
    @tail = new_node
    @length += 1
    new_node
  end

  def pop
    return unless @head && @tail

    last_node = @tail
    if @head.equal?(@tail) # https://shopify.engineering/implementing-equality-in-ruby
      @tail = nil
      @head = nil
    else
      @tail = last_node.prev
      @tail.next = nil
      last_node.prev = nil
    end
    @length -= 1
    last_node
  end

  def prepend(value)
    new_node = Node.new(value)
    if !@head && !@tail
      @head = new_node
      @tail = new_node
    else
      new_node.next = @head
      @head.prev = new_node
      @head = new_node
    end
    @length += 1
    new_node
  end

  def pop_first
    return unless @head && @tail

    first_node = @head
    if @head.equal?(@tail) # https://shopify.engineering/implementing-equality-in-ruby
      @head = nil
      @tail = nil
    else
      @head = first_node.next
      @head.prev = nil
      first_node.next = nil
    end
    @length -= 1
    first_node
  end

  def get(index)
    return unless @head && @tail && index.between?(0, @length - 1)

    if index.between?(0, @length.fdiv(2).floor)
      i = 0
      curr = @head
      until i == index
        curr = curr.next
        i += 1
      end
    else # index.between?(@length.fdiv(2).ceil, @length - 1)
      i = @length - 1
      curr = @tail
      until i == index
        curr = curr.prev
        i -= 1
      end
    end
    curr
  end

  def set_value(index, value)
    node = get(index)
    return false unless node

    node.value = value
    true
  end

  def insert(index, value)
    return false unless index.between?(0, @length - 1)

    if index.zero?
      prepend(value)
    elsif index == @length
      append(value)
    else
      new_node = Node.new(value)
      before = get(index - 1)
      after = before.next
      new_node.next = after
      after.prev = new_node
      before.next = new_node
      new_node.prev = before
    end
    @length += 1
    true
  end

  def remove(index)
    return nil unless index.between?(0, @length - 1)

    if index.zero?
      node = pop_first
    elsif index == @length - 1
      node = pop
    else
      node = get(index)
      node.next.prev = node.prev
      node.prev.next = node.next
      node.next = nil
      node.prev = nil
      node
    end
    @length -= 1
    node
  end
end
