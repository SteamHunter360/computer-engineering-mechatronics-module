# Exercise 1 — Validation Test Cases

## Quadratic and Linear Equation Solver

| Test Case                 |   a |   b |   c | Expected Result        |
| ------------------------- | --: | --: | --: | ---------------------- |
| Two distinct real roots   |   1 |  -5 |   6 | x1 = 3, x2 = 2         |
| One repeated root         |   1 |  -4 |   4 | x = 2                  |
| No real roots             |   1 |   2 |   5 | D = -16; no real roots |
| Linear equation           |   0 |   4 | -12 | x = 3                  |
| Infinitely many solutions |   0 |   0 |   0 | Infinite solutions     |
| No solution               |   0 |   0 |   5 | No solution            |
| Fractional roots          |   2 |  -3 |   1 | x1 = 1, x2 = 0.5       |
