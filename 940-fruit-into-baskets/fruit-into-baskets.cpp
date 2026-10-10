class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen=0;
        int l=0;
        int n=fruits.size();
        int r=0;
        map<int,int> mp;
        while(r<=n-1){
            mp[fruits[r]]++;
            while(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                mp.erase(fruits[l]);
                }
                l++;
            }
           
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};