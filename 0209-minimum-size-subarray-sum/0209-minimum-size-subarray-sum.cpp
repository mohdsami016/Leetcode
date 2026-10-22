class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,sum=0,mini=nums.size()+1;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                mini=min(mini,r-left+1);
                sum-=nums[left++];
            }
        }
        return mini>nums.size()?0:mini;
    }
};