class Solution {
public:
    
    int largestAltitude(vector<int>& gain) {
        int maxh=0;
        int sum=0;
        int n=gain.size();
        for(int i=0;i<n;i++){
            sum+=gain[i];
            maxh=max(sum,maxh);
        }
        return maxh;
    }
};