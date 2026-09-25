## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used binary search by maintaining left and right pointers. The middle element is checked against the target, and the search range is reduced by half after each comparison.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted. If the target is not found, the function returns -1.