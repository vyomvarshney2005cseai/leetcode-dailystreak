/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<numsSize;i++){
        if(min>nums[i]){
            min=nums[i];
        }
        if(max<nums[i]){
            max=nums[i];
        }
    }
    int hash[101];
    for(int i=0;i<101;i++){
        hash[i]=0;
    }
    for(int i=0;i<numsSize;i++){
        hash[nums[i]]++;
    }
    int c=0;
   for(int i=min;i<max+1;i++){
    if(hash[i]==0){
        c++;
    }
   }
   int* ans=(int*)malloc(sizeof(int)*c);
   int j=0;
   for(int i=min;i<max+1;i++){
    if(hash[i]==0){
        ans[j++]=i;
    }
   }
   *returnSize=c;
   return ans;

}