class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int a=nums[0];
        for(int i=0;i<nums.size();i++){
            if(count==0){
                a = nums[i];
            }
            if(a==nums[i]){
                count++;
            }
            else{
                count--;
            }
            
        }
        int cnt=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==a){
                 cnt++;
            }
        }
        if(cnt > nums.size()/2){
            return a;
        }else{
            return 0; 
        }
    }
};
