/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int ec=0;
    int oc=0;
    int* ans=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    for(int i=0;i<ec;i++){
        ans[i]=0;
    }
    for(int i=ec;i<numsSize;i++){
        ans[i]=1;
    }
    return ans;
}