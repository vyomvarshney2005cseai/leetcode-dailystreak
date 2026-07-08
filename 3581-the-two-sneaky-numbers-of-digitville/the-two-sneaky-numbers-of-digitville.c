/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int hash[101]={0};
    *returnSize=2;
    int* ans=(int*)malloc(sizeof(int)*2);
    for(int i=0;i<numsSize;i++){
        hash[nums[i]]++;
    } 
    int k=0;
    for(int i=0;i<101;i++){
        if(hash[i]==2){
        ans[k++]=i;
    }  
    }
    return ans;
}