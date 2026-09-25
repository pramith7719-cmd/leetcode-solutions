## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used the first string as the initial prefix and compared it with each of the remaining strings. The prefix is shortened whenever the characters do not match.

### Complexity

- Time: O(n × m)
- Space: O(m)

### Notes

If there is no common prefix, the function returns an empty string.