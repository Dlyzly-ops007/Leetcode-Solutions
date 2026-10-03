\# 9. Palindrome Number



\*\*Difficulty:\*\* Easy  

\*\*Topic:\*\* Math



\## Approach



Reverse the number mathematically and compare it with the original number.



Get the last digit using:



`x % 10`



Add it to the reversed number:



`reversed\_num = reversed\_num \* 10 + x % 10`



Remove the last digit using:



`x //= 10`



Finally:



`original == reversed\_num`



\## Important Notes



\- Negative numbers cannot be palindromes because of the `-` sign.

\- Save the original value because `x` gets modified inside the loop.

\- `% 10` gets the last digit.

\- `// 10` removes the last digit.

\- Time Complexity: \*\*O(log₁₀ x)\*\*

\- Space Complexity: \*\*O(1)\*\*



\## Pattern to Remember



For digit-based problems:



\- `n % 10` → get last digit

\- `n // 10` → remove last digit

\- `rev \* 10 + digit` → build a reversed number

