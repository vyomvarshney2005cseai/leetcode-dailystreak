int countPairs(int* nums, int numsSize, int target) {
    int ans=0;
    for(int i=0;i<numsSize;i++){
        int j=i+1;
        while(j<numsSize){
           if(nums[i]+nums[j]<target){
            ans++;
           }
           j++;
        }
    }
    return ans;
    
}