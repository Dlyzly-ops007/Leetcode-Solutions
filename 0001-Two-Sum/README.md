\# 1. Two Sum



\*\*Difficulty:\*\* Easy  

\*\*Topic:\*\* Arrays



\## Approach



Use two nested loops to check every possible pair.



For each `nums\[i]`, check the elements after it and see whether:



`nums\[j] == target - nums\[i]`



If true, then:



`nums\[i] + nums\[j] == target`



Return their indices.



\## Important Notes



\- `j` starts from `i + 1` so the same element is not used twice.

\- Returns \*\*indices\*\*, not the actual numbers.

\- This is the brute-force approach.

\- Time Complexity: \*\*O(n²)\*\*

\- Space Complexity: \*\*O(1)\*\*



\## Pattern to Remember



When looking for two values that add to a target:



`second value = target - first value`



Later this can be optimized using a \*\*hash map\*\*.

