# Asymptotic Analysis

## Growth of Functions

* The order of growth of an algorithm's running time represents a simple characterization of the algorithm's efficiency.
* Although sometimes it is possible to determine the exact running time of an algorithm, in practice we often focus on how the running time grows as the input size increases. For large enough inputs, multiplicative constants and lower-order terms become less significant.

## Asymptotic Notation

* Asymptotic notation is used primarily to <u>describe</u> the running times of algorithms.
* Asymptotic notation actually applies to functions.
* Generally, the functions to which we apply asymptotic notation represent the running times of algorithms, however, asymptotic notation could also be applied to functions that represent other aspects of algorithms, such as the amount of space they use.
* We need to understand which running time we mean (best-case, average-case, or worst-case) when we use asymptotic notation to describe an algorithm's running time.



## Formal definitions of Big O, Big Omega, and Big Theta

<img src='./img/GraphicRepresentation_BigTheta_BigO_BigOmega.png' alt='Graphic Representation of Big Theta, Big O, and Big Omega'>

Image source: *Introduction to Algorithms, 3rd Edition, by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein*

- (a) Big Theta (Θ)
- (b) Big O (O)
- (c) Big Omega (Ω)

**Big O**

* Represents an upper bound on the growth rate of a function.
* Indicates $f(n)$ doesn’t grow faster than $g(n)$, up to a constant factor, for large $n$.
* It is not the same as the worst-case scenario (time, space, etc.), it is just an upper bound, although in practice it's often associated with the worst-case scenario.
* It is an upper bound, but not necessarily the tightest one. It accepts any function that will eventually become an upper bound for sufficiently large $n$. The tightest upper bound is the one that grows as close as possible to $f(n)$.

*Formal Definition:*

$$
f(n) = O(g(n))
$$

$$
0 \leq f(n) \leq c \cdot g(n) \quad \text{for all} \quad n \geq n_0, C > 0
$$

* $n$ represents the size of the input to the algorithm (e.g., number of elements in an array).
* $f(n)$ is the exact cost function of the algorithm as a function of input size $n$ (e.g., running time, number of operations, memory usage).
* $g(n)$ is a reference growth function we choose to compare against $f(n)$. It's usually something standard like $g(n) = n, n^2, \log n, 2^n$, etc. We pick $g(n)$ to summarize the growth of $f(n)$.
* $O(n)$ is not a single function, but a set of functions that grow no faster than $g(n)$ up to a constant factor.

$$
O(g(n)) = \{ f(n) \mid \exists C > 0, n_0 \geq 0: 0 \leq f(n) \leq C \cdot g(n), \forall n \geq n_0 \}
$$

* O-notation provides an upper bound for a function to within a constant factor. We write $f(n) = O(g(n))$ if there exist positive constants $C$ and $n_0$ such that at and to the right of $n_0$, $f(n)$ always lies at or below $C \cdot g(n)$.

**Resources:**

* Introduction to Algorithms, 3rd Edition, by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein
