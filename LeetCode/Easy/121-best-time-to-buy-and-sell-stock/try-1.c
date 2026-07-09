/*
 * Problem #121: Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 11:12:12 AM
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

int maxProfit(int* prices, int pricesSize) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if ((prices[i] - minPrice) > maxProfit) {
            maxProfit = prices[i] - minPrice; 
        }
    }
    return maxProfit;
}
