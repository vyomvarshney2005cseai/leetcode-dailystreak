/*
 * Problem #3300: Minimum Element After Replacement With Digit Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 11:51:42 PM
 * Link: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
 */

int minElement(int* nums, int numsSize) {
    int min=10001;
    for(int i=0;i<numsSize;i++){
        int n=nums[i];
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        if(sum<min){
            min=sum;
        }
    }
    return min;
}
