class Solution {
public:
    int maxSubArray(vector<int>& a) {
        long long max,sum;
        sum=0;
        max=LONG_MIN;
        for(int i=0;i<a.size();i++){
            sum=sum+a[i];
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
};