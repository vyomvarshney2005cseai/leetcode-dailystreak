int singleNumber(int* nums, int numsSize) {
    int n=numsSize;
    int hash[60009]={0};
    for(int i=0;i<n;i++){
        hash[nums[i]+30000]++;
    }
    int ans;
    for(int i=0;i<n;i++){
        if(hash[nums[i]+30000]==1){
            ans=nums[i];
        }
    }
    return ans;
}