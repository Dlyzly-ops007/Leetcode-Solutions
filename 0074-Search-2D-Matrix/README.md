\# 74. Search a 2D Matrix



\*\*Difficulty:\*\* Medium  

\*\*Topic:\*\* Array, Binary Search, Matrix



\## Approach



Since each row is sorted and the first element of a row is greater than the last element of the previous row, the entire matrix can be visualized as a single sorted 1D array.



Use Binary Search on this conceptual 1D array:

\- Set `left = 0` and `right = m \* n - 1`.

\- Calculate `mid` and map it back to 2D matrix coordinates:

&#x20; `row = mid // n`

&#x20; `col = mid % n`

\- Compare `matrix\[row]\[col]` to the `target` and adjust the `left` or `right` pointers accordingly.



\## Important Notes



\- `n` represents the number of columns, which is necessary for the coordinate mapping.

\- Returns a \*\*boolean\*\* (`True` or `False`), not the indices.

\- Time Complexity: \*\*O(log(m \* n))\*\*

\- Space Complexity: \*\*O(1)\*\*



\## Pattern to Remember



When treating a 2D matrix of `n` columns as a flattened 1D array, you can map a 1D `index` back to 2D coordinates using:

`row = index // n`

`col = index % n`

