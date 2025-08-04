class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int nr = matrix.size();
        int nc = matrix[0].size();
        int top = 0;
        int bottom  = nr-1;
        int left = 0;
        int right = nc-1;
        vector<int> vec;

        while(top<=bottom && left<=right){

            for(int i=top;i<=right;i++){
                vec.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                vec.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
            for(int i=right;i>=left;i--){
                vec.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if (left <= right) {
            for(int i=bottom;i>=top;i--){
                vec.push_back(matrix[i][left]);
            }
            left++;
            }
        }
            return vec;
    }
};
