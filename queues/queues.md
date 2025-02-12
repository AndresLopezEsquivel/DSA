# Queues
A queue is a linear data structure based on a collection of items that follow the *First-in, First-out* sequence. This means that the first item added is the first to be removed. We can also say that items are removed in the order they were inserted.

## Structure of a queue
A queue consists of two main parts: 
  1. front/head: the **first element** in the queue, which is removed when dequeued. 
  2. rear/tail/back: the **last element** in the queue, where new items are added.

![Queue](https://github.com/user-attachments/assets/1cd96878-1694-4cc0-8b37-d7bd9b3e7c2b)

## Core operations 
- `enqueue()`: adds an element at the end of the queue.
- `dequeue()`: removes the first element in the queue.
- `isEmpty()`: verifies if the queue contains elements.
