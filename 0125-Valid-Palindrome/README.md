\# 125. Valid Palindrome



\*\*Difficulty:\*\* Easy  

\*\*Topic:\*\* Two Pointers, String



\## Approach



Initialize two pointers, `left` at the beginning and `right` at the end of the string.

Iterate while `left < right`:

\- Increment the `left` pointer if the current character is not alphanumeric.

\- Decrement the `right` pointer if the current character is not alphanumeric.

\- If both characters are alphanumeric, compare their lowercase values. If they do not match, return `false`.

\- Move both pointers inward to continue checking.

Return `true` if the loop completes without any mismatches.



\## Important Notes



\- Non-alphanumeric characters (spaces, punctuation) are completely ignored.

\- Uppercase letters must be treated identically to lowercase letters.

\- An empty string or a string containing only symbols correctly evaluates to `true`.

\- Time Complexity: \*\*O(n)\*\*

\- Space Complexity: \*\*O(1)\*\*



\## Pattern to Remember



When checking for palindromes or symmetric properties, use the \*\*Two Pointers\*\* technique starting from opposite ends and moving inward to evaluate the sequence in-place.

