class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int nr=matrix.size();
        int nc=matrix[0].size();
        vector<int> res;
        int top=0;
        int left=0;
        int bottom=nr-1;
        int right=nc-1;
        int k=0;
        while(top<=bottom && left<=right){
        if(top<=bottom){
          for(int j=left;j<=right;j++){
            res.push_back(matrix[top][j]);
          }
          top++;
        }
        
        if(left<=right){
          for(int i=top;i<=bottom;i++){
            res.push_back(matrix[i][right]);
          }
          right--;
        }
        
if(top<=bottom){
          for(int j=right;j>=left;j--){
            res.push_back(matrix[bottom][j]);
          }
          bottom--;
}
if(left<=right){
          for(int i=bottom;i>=top;i--){
            res.push_back(matrix[i][left]);
          }
          left++;
        }
        }
        return res;
    }
};