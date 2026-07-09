/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize=numRows;
    int** ans=(int**)malloc(sizeof(int*)*numRows);
    *returnColumnSizes=(int*)malloc(sizeof(int)*numRows);
    
    for(int i=0;i<numRows;i++){
        (*returnColumnSizes)[i] = i+1; 
    ans[i] = (int*)malloc(sizeof(int) *(i+1));
    int a=1;
    for (int j = 0; j <= i; j++) {
            ans[i][j]=a;
            a=(a*(i-j) )/ (j+1);
        }
}
return ans;
}