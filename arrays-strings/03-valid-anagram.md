## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrences of each lowercase letter in both strings. I increment the count for characters in the first string and decrement it for characters in the second string. If all counts are zero, the strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the two strings have different lengths, they cannot be anagrams. The frequency array efficiently compares the characters.