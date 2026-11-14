class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target) return true;
        int n=mat.size();
        vector<vector<int>> dup=mat;
        int c=0;
        while(c!=3){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int in=j;
                int jn=n-1-i;
                mat[in][jn]=dup[i][j];
            }
        }
        if (mat==target){
            return true;
        }
        else{
        c++;
        dup=mat;
        }
        }
        return false;
        
    }
};