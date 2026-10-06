class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int ei=0;
        int oi=1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
               ans[ei]=nums[i];
               ei+=2;
            }
            else{
                ans[oi]=nums[i];
                oi+=2;
            }
        }
        return ans; 
    }
};