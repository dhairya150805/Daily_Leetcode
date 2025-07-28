class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;

        vector<int> v;

        int rem;

        for(int i=0;i<nums.size();i++){
            rem = target - nums[i];
            if(m.find(rem) != m.end()){
                return {m[rem],i};
            } else{
            m.insert({nums[i],i});
            }
        }
        return v;
    }
};
