# Dichotomy-method
C program for the dichotomy method

The dichotomy method or bisection method is, in mathematics, an algorithm for finding a zero of a function which consists of repeating the partitions of an interval into two parts and then selecting the sub-interval in which there is a zero of the function.

We consider two real numbers a and b and a continuous real function f on the interval [a, b] such that f(a) and f(b) have opposite signs. Suppose we want to solve the equation f(x) = 0. By the intermediate value theorem, f has at least one zero in the interval [a, b]. The dichotomy method consists of dividing the interval in two by calculating m = (a+b)/2. There are now two possibilities: either f(a) and f(m) have opposite signs, or f(m) and f(b) have opposite signs.

The dichotomy algorithm is then applied to the subinterval in which the sign change occurs, which means that the dichotomy algorithm is recursive.
The method converges linearly, which is very slow compared to Newton's method. The advantage over the latter is its wider field of application: it is sufficient only that f(a) and f(b) have opposite signs and that the sign of f(m) can be determined at each iteration .
