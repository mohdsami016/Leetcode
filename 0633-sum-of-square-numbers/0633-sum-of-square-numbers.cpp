class Solution {
public:
    bool judgeSquareSum(int c) {
        long long x=(long long)sqrt(c);
        int y=0;
        while(y<=x){
            long long sum=pow(y,2)+pow(x,2);
            if(sum==c){
                return true;
            }
            else if(sum>c){
                x--;
            }else{
                y++;
            }
        }
        return false;
    }
};