/*
 * Problem #628: Maximum Product of Three Numbers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/26/2026, 11:36:29 PM
 * Link: https://leetcode.com/problems/maximum-product-of-three-numbers/
 */

#define MAX(a, b) ((a) > (b) ? (a) : (b))
int maximumProduct(int* nums, int numsSize) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;  
    for (int i = 0; i < numsSize; i++) {
        int n = nums[i];
        if (n > max1) {
            max3 = max2;
            max2 = max1;
            max1 = n;
        } else if (n > max2) {
            max3 = max2;
            max2 = n;
        } else if (n > max3) {
            max3 = n;
        }
        if (n < min1) {
            min2 = min1;
            min1 = n;
        } else if (n < min2) {
            min2 = n;
        }
    }
    return MAX(max1 * max2 * max3, min1 * min2 * max1);
}
