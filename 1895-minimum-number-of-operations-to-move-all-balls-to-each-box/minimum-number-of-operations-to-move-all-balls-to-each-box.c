/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {

    int len = strlen(boxes);
    int *ans = (int *)calloc(len, sizeof(int));
    
    int balls = 0;
    int ops = 0;
    
    
    for (int i = 0; i < len; i++) {
        ans[i] += ops;
        if (boxes[i] == '1') balls++;
        ops += balls;
    }
    
    balls = 0;
    ops = 0;
    
    for (int i = len - 1; i >= 0; i--) {
        ans[i] += ops;
        if (boxes[i] == '1') balls++;
        ops += balls;
    }
    
    *returnSize = len;
    return ans;

}