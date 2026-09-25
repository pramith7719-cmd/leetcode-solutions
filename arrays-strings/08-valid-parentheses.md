## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to keep track of opening brackets. When a closing bracket is found, I check whether it matches the most recent opening bracket. The string is valid only if all brackets are correctly matched.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The stack follows the Last-In-First-Out (LIFO) principle, which is useful for matching nested brackets.