class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]) return 0;
        int mid;
        int beg=0;
        int end=nums.size()-1;
        while(beg<=end){
            mid=(beg+end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else{
                if(nums[mid]>target){
                    end=mid-1;
                }
                else{
                    beg=mid+1;
                }
            }
        }
        return beg;
    }
};