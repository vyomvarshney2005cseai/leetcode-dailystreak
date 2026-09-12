class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int k=0;
        for(int i=0;i<2*n;i=i+2){
            ans[i]=nums[k++];
        }
        for(int i=1;i<2*n;i=i+2){
            ans[i]=nums[k++];
        }
        return ans;
    }
};