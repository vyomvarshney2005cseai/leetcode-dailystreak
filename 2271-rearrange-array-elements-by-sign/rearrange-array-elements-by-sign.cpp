class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> p;
        vector<int> ne;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                p.push_back(nums[i]);
            }
            else{
                ne.push_back(nums[i]);
            }
        }
        int k=0;
        for(int i=0;i<n;i=i+2){
            nums[i]=p[k++];
        }
        k=0;
        for(int i=1;i<n;i=i+2){
            nums[i]=ne[k++];
        }
        return nums;
        
    }
};