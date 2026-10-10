# Exercise 2 — Validation Test Cases

## Triangle Area Calculator

| Test Case                    |   a |   b |   c | Expected Result      |
| ---------------------------- | --: | --: | --: | -------------------- |
| 3-4-5 triangle               |   3 |   4 |   5 | Area = 6             |
| Equilateral triangle         |   6 |   6 |   6 | Area ≈ 15.5885       |
| Isosceles triangle           |   5 |   5 |   6 | Area = 12            |
| Scalene triangle             |   4 |   5 |   6 | Area ≈ 9.9216        |
| Zero-length side             |   0 |   4 |   5 | Invalid side lengths |
| Negative-length side         |  -3 |   4 |   5 | Invalid side lengths |
| Triangle inequality violated |   1 |   2 |   4 | Invalid triangle     |
| Degenerate triangle          |   2 |   3 |   5 | Invalid triangle     |
