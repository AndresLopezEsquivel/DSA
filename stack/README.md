# Stack
A *stack* is a linear data structure that follows the **LIFO** principle: Last in, First out. This means the last element inserted is the first to be removed. Both **insertion** and **deletion** operations happen at one end of the stack, called the "top".

<img width="597" alt="2024-12-30" src="https://github.com/user-attachments/assets/0b52a0f3-b286-4d98-a877-9d0cfb5d6e26" />

## Key operations 
1. Push: *Insert* an element into the stack.
2. Pop: *Delete* an element from the stack.
3. Top: Return the *top* element without removing it. 
4. isEmpty: Returns *true* is stack is *empty*, otherwise *false*.
5. isFull: Returns *true* if the stack is *full* (in implementations with a fixed size).
6. Size: Returns the number of elements in the stack.

### Use case examples:
- Undo functionality: Helps revert to the previous state in applications like text editors.
- Backtracking algorithms: Used in scenarios like navigating mazes or parsing mathematical expressions.
- Function calls in recursion: Manages the sequence of function execution (call stack).
