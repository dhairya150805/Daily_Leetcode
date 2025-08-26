class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        int time = size/3;
        map<int,int> m;
        vector<int> vec;
        set<int> s;
        for(int i=0;i<size;i++){
            m[nums[i]]++;
        }
        for(int i=0;i<size;i++){
          if(m[nums[i]] > time){
            s.insert(nums[i]);
          }
        }
         for(int list:s){
        vec.push_back(list);
    }
        return vec;
    }
};
