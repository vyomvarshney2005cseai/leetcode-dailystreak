class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        
        vector<int> c(50000, 0);
        for(int val : nums) {
            c[val]++;
        }
        
        int maxf = 0;
        for(int val : nums) {
            if(c[val] > maxf) {
                maxf = c[val];
            }
        }
        
        int cm = 0;
        for(int val : nums) {
            if(c[val] == maxf) {
                cm++;
            }
        }
        
        vector<int> maxff(cm, 0);
        int i = 0;
        for(int val : nums) {
            if(c[val] == maxf) {
                maxff[i++] = val;
            }
        }
        
        int min_len = INT_MAX;
        
       
        for(int j = 0; j < i; j++) {
            int first_idx = -1;
            int last_idx = -1;
            
            for(int k = 0; k < n; k++) {
                if(maxff[j] == nums[k]) {
                    if(first_idx == -1) {
                        first_idx = k; 
                    }
                    last_idx = k;     
                }
            }
            
            int len = last_idx - first_idx + 1;
            if(len < min_len) {
                min_len = len;
            }
        }
        
        return min_len;
    }
};