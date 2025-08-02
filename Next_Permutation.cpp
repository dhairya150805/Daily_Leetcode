class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        bool valid = true;
        for(int a=n-1;a>0;a--){
            if(nums[a]>nums[a-1]) valid=false;
        }

        if(valid == true){
            sort(nums.begin(),nums.end());
            return;
        }

         for(int i=n-1;i>0;i--){
            if(nums[i-1] < nums[i]){
                j=i-1;
                break;
            }
        }
        
    int k=nums[j+1];
    int f=0;
        for(int i=j+1;i<n;i++){
            if(nums[i] > nums[j]){
                k = min(nums[i],k);
            }
            if(k==nums[i]){
                f=i;
            }
        }

        swap(nums[j],nums[f]);

        sort(nums.begin() + j+1, nums.begin() + n);

    }
};
