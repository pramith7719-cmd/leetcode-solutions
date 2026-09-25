## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the lowest stock price seen so far. For each day, I calculate the profit by subtracting the lowest price from the current price and update the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold. If prices continuously decrease, the maximum profit remains 0.