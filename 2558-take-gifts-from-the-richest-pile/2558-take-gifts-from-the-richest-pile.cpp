class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        priority_queue<int> pq(gifts.begin(),gifts.end());
        while(k--){
            int a=sqrt(pq.top());
            pq.pop();
            pq.push(a);
        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
            
        }return sum;
        
    }
};