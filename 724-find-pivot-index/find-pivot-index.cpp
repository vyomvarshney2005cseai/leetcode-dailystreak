class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int lsum=0;
        int rsum=sum-nums[0];
        if(lsum==rsum) return 0;
        for(int i=1;i<n;i++){
            rsum-=nums[i];
            lsum+=nums[i-1];
            if(lsum==rsum) return i;
        }
        return -1;

    }
};