class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string first=strs[0],last=strs[strs.size()-1],ans="";
        int i=0;
        while(i<first.size()&&i<last.size()&&first[i]==last[i]){
            ans+=first[i];
            i++;
        }
        return ans;
    }
};