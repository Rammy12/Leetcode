class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum=0;
        if(nums.size()==1) return nums;
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
        
        
    }
};