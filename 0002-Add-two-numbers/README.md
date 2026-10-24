# 2. Add Two Numbers

**Difficulty:** Medium  
**Topic:** Linked List, Math

## Approach

Use a dummy head node to simplify the creation of the result linked list. Maintain a `carry` variable initialized to `0`.

Iterate through both linked lists (`l1` and `l2`) simultaneously. In each iteration:
Calculate the sum of the current values from `l1` and `l2`, plus the `carry`.
The new digit to store in the current node is `sum % 10`.
Update the `carry` for the next iteration using `sum / 10`.

Continue this process as long as there are nodes left in either list **or** there is a non-zero `carry` remaining.

## Important Notes

- A dummy head helps avoid edge cases when initializing the head of the new list. Return `dummy.next` at the end.
- The loop condition `while (l1 != NULL || l2 != NULL || carry != 0)` elegantly handles cases where lists are different lengths or a final carry creates an extra digit (e.g., `99 + 1 = 100`).
- Time Complexity: **O(max(m, n))** where `m` and `n` are the lengths of `l1` and `l2`.
- Space Complexity: **O(1)** auxiliary space (excluding the space needed for the output list).

## Pattern to Remember

When performing digit-by-digit addition with linked lists:
Always use a `dummy` node to anchor the result, and include the `carry != 0` check directly in your `while` loop condition to handle final overflows automatically.