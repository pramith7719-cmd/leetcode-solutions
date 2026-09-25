## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a nested loop to check every possible pair of elements. If the sum of two elements equals the target, their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution checks each pair only once by starting the second loop from the element after the first index.