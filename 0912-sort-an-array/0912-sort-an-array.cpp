class Solution {
public:
    void merge(vector<int>&a,int low,int mid,int high){
            vector<int>temp;
            int left=low,right=mid+1;
            while(left<=mid&&right<=high){
                if(a[left]<=a[right]){
                    temp.push_back(a[left++]);
                }else{
                    temp.push_back(a[right++]);
                }
            }
            while(left<=mid){
                    temp.push_back(a[left++]);
                }
            while(right<=high){
                    temp.push_back(a[right++]);
            }
            for(int i=low;i<=high;i++){
                a[i]=temp[i-low];
            }
        }
        void mergesort(vector<int>&a,int low,int high){
            if(low>=high) return;
            int mid=(low+high)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merge(a,low,mid,high);
        }
    vector<int> sortArray(vector<int>& a) {
        mergesort(a,0,a.size()-1);
        return a;
    }
};