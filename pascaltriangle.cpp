class Solution {
public:

    vector<int> row(int num){
        vector<int> v;
        v.push_back(1);
        int ans =1;
        for(int col=1;col<num;col++){
            ans = ans*(num-col);
            ans = ans/col;
            v.push_back(ans);
        }
        return v;
    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> vec;
        for(int i=1;i<=numRows;i++){
            vec.push_back(row(i));
        }
        return vec;
    }
};
