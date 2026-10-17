class Solution {
public:
    int thirdMax(vector<int>& a) {
        sort(a.begin(),a.end());
        int l=a.size()-1,count=1;
        for(int i=a.size()-2;i>=0;i--){
            if(a[l]!=a[i]){
                count++;
                l=i;
            }
            if(count==3)
             return a[l];
        }
        return a[a.size()-1];     
    }
};