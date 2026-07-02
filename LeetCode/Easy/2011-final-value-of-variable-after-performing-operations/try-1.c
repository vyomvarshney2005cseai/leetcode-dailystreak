/*
 * Problem #2011: Final Value of Variable After Performing Operations
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 12/27/2025, 12:52:45 AM
 * Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
 */

int finalValueAfterOperations(char** operations, int operationsSize) {
    int x=0;
    for(int i=0;i<operationsSize;i++){
        if(operations[i][1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    return x;
    
}
