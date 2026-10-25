\# 121. Best Time to Buy and Sell Stock



\*\*Difficulty:\*\* Easy  

\*\*Topic:\*\* Array, Dynamic Programming



\## Approach



Iterate through the `prices` array while keeping track of the minimum price seen so far. 



For each `price` in the array:

\- Update the `min\_price` if the current `price` is lower.

\- Otherwise, calculate the potential profit (`price - min\_price`) and update `max\_profit` if this potential profit is higher than the current `max\_profit`.



\## Important Notes



\- You must buy before you sell (time flows forward).

\- If the prices strictly decrease, the max profit will correctly remain `0`.

\- Only a single pass through the array is required.

\- Time Complexity: \*\*O(n)\*\*

\- Space Complexity: \*\*O(1)\*\*



\## Pattern to Remember



When you need to find a maximum difference with a sequential constraint (e.g., buy before sell), keep track of the \*\*historical minimum\*\* (or maximum) as you iterate through the sequence.

