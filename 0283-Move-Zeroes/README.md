# [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/)

## Problem Overview
Given an integer array `nums`, move all `0`s to the end of the array while maintaining the relative order of non-zero elements in-place.

## Solution Approach
This optimal Python implementation uses a two-pointer swapping technique:
- **`last_non_zero` pointer:** Keeps track of the index where the next non-zero element should be placed.
- **Iteration pointer (`i`):** Traverses through each element of the array.
- **In-Place Swap:** Whenever `nums[i]` is non-zero, swap `nums[i]` with `nums[last_non_zero]` and increment `last_non_zero`.

This guarantees that non-zero elements preserve their initial relative order while automatically pushing zeros to the right.

## Complexity Analysis
- **Time Complexity:** $O(n)$ — single traversal of the array containing $n$ elements.
- **Space Complexity:** $O(1)$ auxiliary space — performed entirely in-place.