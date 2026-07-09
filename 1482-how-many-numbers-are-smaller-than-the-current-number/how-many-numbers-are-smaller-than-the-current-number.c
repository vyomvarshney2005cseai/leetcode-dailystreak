/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    
    *returnSize=n;
    int* ans=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if((i!=j) && (nums[i]>nums[j])){
                c++;
            }
        }
        ans[i]=c;
        
    }
    return ans;
}