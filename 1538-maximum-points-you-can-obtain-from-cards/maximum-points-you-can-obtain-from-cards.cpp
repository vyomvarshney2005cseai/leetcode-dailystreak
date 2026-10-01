class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int n=cardPoints.size();
        int rsum=0;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        int maxsum=lsum;
        int ri=n-1;
        for(int j=k-1;j>=0;j--){
                lsum-=cardPoints[j];
                rsum+=cardPoints[ri];
                maxsum=max(maxsum,lsum+rsum);
                ri--;
        }
        return maxsum;
        }
    };