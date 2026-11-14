class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dup=matrix;
        int jn=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int in=j;
                int jn=n-1-i;
                matrix[in][jn]=dup[i][j];
            }
        }
    }
};