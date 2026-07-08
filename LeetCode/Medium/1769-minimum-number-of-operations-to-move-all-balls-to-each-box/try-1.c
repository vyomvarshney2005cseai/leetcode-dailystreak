/*
 * Problem #1769: Minimum Number of Operations to Move All Balls to Each Box
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 6:24:18 PM
 * Link: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int boxs[strlen(boxes)];
    int* answer=(int*)malloc(sizeof(int)*strlen(boxes));
    *returnSize=strlen(boxes);
    for(int i=0;boxes[i]!='\0';i++){
        if(boxes[i]=='0'){
            boxs[i]=0;
        }
        else{
            boxs[i]=1;
        }
    }
    for(int i=0;boxes[i]!='\0';i++){
        int dif=0;
        for(int j=0;boxes[j]!='\0';j++){
                if(boxs[j]==1){
                    dif+=abs(i-j);
                }
        }
        answer[i]=dif;
    }
    return answer;
}
