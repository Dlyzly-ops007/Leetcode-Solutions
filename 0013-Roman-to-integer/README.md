# 13. Roman to Integer

**Difficulty:** Easy  
**Topic:** Math, String

## Approach

Iterate through the string `s` character by character and convert each Roman numeral to its integer value.

For each character's value (`c`):
Add `c` to the running total (`r`).
Check if the previous value (`p`) was less than the current value (`c`):

`p < c`

If true, it indicates a subtractive combination (like `IV` or `IX`). Since `p` was added in the previous iteration, subtract twice its value to correct the total:

`r -= 2 * p`

Update the previous value `p` to the current value `c` and move to the next character.

## Important Notes

- The subtractive correction `-= 2 * p` is necessary because the previous value was already added to the result in the step before.
- Returns the **integer** representation of the Roman numeral string.
- Time Complexity: **O(n)** where n is the length of the string.
- Space Complexity: **O(1)** as it only uses a few integer variables.

## Pattern to Remember

When converting Roman numerals to integers from left to right, track the previous value. 

If a smaller numeral appears before a larger one:
`current total = current total - (2 * previous value)`