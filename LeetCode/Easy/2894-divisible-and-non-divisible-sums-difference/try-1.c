/*
 * Problem #2894: Divisible and Non-divisible Sums Difference
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 12/21/2025, 2:41:00 AM
 * Link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
 */

int differenceOfSums(int n, int m) {
    int num1=0;
    int num2=0;
    for(int i=1;i<=n;i++){
        if(i%m==0){
            num2+=i;
        }
        else{
            num1+=i;
        }
    }
      return num1-num2;
    }

