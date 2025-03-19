# Dynamic Programming

There are two requirements for a problem to be solved using dynamic programming:
1. **Overlapping Subproblems**: The problem can be broken down into smaller subproblems which are reused several times.
2. **Optimal Substructure**: The optimal solution to the problem can be constructed from the optimal solutions of its subproblems.

## Overlapping Subproblems

Dynamic programming is used when a problem can be broken down into smaller repeating subproblems (ovelapping means that the same subproblem appears multiple times). This is in contrast to divide-and-conquer algorithms, which break a problem into smaller subproblems that are independent of each other. In dynamic programming, we solve each subproblem only once and store the result for future reference, which saves time and avoids redundant calculations.

The processs of storing the results of subproblems is called **memoization**.

## Optimal Substructure

Dynamic programming is used when the optimal solution to a problem can be constructed from the optimal solutions of its subproblems. This means that if we know the optimal solutions to the subproblems, we can combine them to find the optimal solution to the original problem.
