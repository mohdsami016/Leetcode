class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int f=0,s=1;
        while(s!=nums.size()){
            if(nums[f]==nums[s])
             return true;
            f++;
            s++;
        }
        return false;
    }
};