class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,best=0,depth=0,water=0;
        while(left<right){
            depth=min(height[left],height[right]);
            water=depth*(right-left);
            best=max(best,water);
            if(height[left]<height[right])
             left++;
            else
             right--;
        }
        return best;
    }
};