from queue import Queue

if __name__ == "__main__":
    queue = Queue(0)
    print("Enqueue: ")
    queue.enqueue(1)
    queue.enqueue(2)
    queue.enqueue(3)
    queue.print()
    print("Dequeue")
    print(queue.dequeue().value)
    print(queue.dequeue().value)
    print(queue.dequeue().value)
    print(queue.dequeue().value)
    print(queue.dequeue())
    print(queue.dequeue())
