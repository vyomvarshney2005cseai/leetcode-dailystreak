class Solution {
public:
    int largestInteger(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        if (k == n) {
            return *std::max_element(nums.begin(), nums.end());
        }
        if (k == 1) {
            int max_val = -1;
            for (auto& [val, freq] : count) {
                if (freq == 1) {
                    max_val = std::max(max_val, val);
                }
            }
            return max_val;
        }
        int ans = -1;
        if (count[nums[0]] == 1) {
            ans = std::max(ans, nums[0]);
        }
        if (count[nums[n - 1]] == 1) {
            ans = std::max(ans, nums[n - 1]);
        }
        return ans;
    }
};