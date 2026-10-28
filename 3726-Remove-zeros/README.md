\# 3726. Remove Zeros in Decimal Representation



\## Problem Description



Given a positive integer `n`, return the integer obtained by removing all zeros from the decimal representation of `n`.



\- \*\*LeetCode Link:\*\* \[3726. Remove Zeros in Decimal Representation](https://leetcode.com/problems/remove-zeros-in-decimal-representation/)

\- \*\*Difficulty:\*\* Easy

\- \*\*Topics:\*\* Math, Simulation



\### Examples



\*\*Example 1:\*\*

\- \*\*Input:\*\* `n = 1020030`

\- \*\*Output:\*\* `123`

\- \*\*Explanation:\*\* After removing all zeros from `1020030`, we get `123`.



\*\*Example 2:\*\*

\- \*\*Input:\*\* `n = 1`

\- \*\*Output:\*\* `1`

\- \*\*Explanation:\*\* `1` has no zero in its decimal representation. Therefore, the answer is `1`.



\### Constraints



\- $1 \\le n \\le 10^{15}$



\---



\## Explanation



\### 1. String Approach (Python 3)

\- Convert the integer $n$ into a string.

\- Remove all `'0'` characters using string replacement.

\- Convert the modified string back into an integer and return it.



\### 2. Mathematical Approach (C)

\- Process each digit from right to left using the modulo operation (`n % 10`).

\- Skip any digit equal to `0`.

\- For non-zero digits, reconstruct the target number using a positional multiplier (`place \*= 10`).

\- Integer-divide $n$ by $10$ (`n /= 10`) in each iteration until $n = 0$.



\### Complexity



\- \*\*Time Complexity:\*\* $O(\\log\_{10} n)$ — proportional to the number of digits in $n$.

\- \*\*Space Complexity:\*\* $O(1)$ auxiliary space for numerical extraction (or $O(\\log\_{10} n)$ for string conversion).

