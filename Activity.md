# Recursions Assignment

### Task 1: Identify the base case
`return if low > high` 

### Task 2: Predict
The program will enter an infinite recursion and eventually crash with a stack overflow error. Because the function calls `factorial(n - 2)`, evaluating `factorial(10)` generates the sequence 10, 8, 6, 4, 2, 0, -2, etc. The variable `n` skips over the base case condition (`n == 1`) entirely.

### Task 3: Fix the `sum(low, high)` function

```cpp
int sum(int low, int high) {
    if (high == low) {
        return low;
    }
    return high + sum(low, high - 1);
}
