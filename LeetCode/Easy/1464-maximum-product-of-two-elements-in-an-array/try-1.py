/*
 * Problem #1464: Maximum Product of Two Elements in an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 7/27/2026, 11:31:02 PM
 * Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
 */

class Solution:
    def maxProduct(self, nums: list[int]) -> int:
        x, y = sorted(nums)[-2:]
        return (x - 1) * (y - 1)
        
        
