class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>>pq;
        for(vector<int>x:boxTypes){
            pq.push({x[1],x[0]});
        }
        int cap=0,units=0;
        while(cap<=truckSize&&!pq.empty()){
            if(cap+pq.top().second<truckSize){
             units+=pq.top().first*pq.top().second;
             cap+=pq.top().second;
             pq.pop();
            }else{
                int rem=truckSize-cap;
                cap=truckSize;
                units+=rem*pq.top().first;
                pq.pop();
            }
        }
        return units;
    }
};