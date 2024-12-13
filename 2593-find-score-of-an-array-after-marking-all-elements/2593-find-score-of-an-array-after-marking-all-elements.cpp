class Solution {
    typedef pair<int,int> ppi;
public:
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        priority_queue<ppi,vector<ppi>,greater<ppi>> pq ;
        for(int i=0;i<n;i++){
            pq.push(make_pair(nums[i],i));
        }
        vector<int> v (n,0);
        int x=n;
        long long sc=0;
        while(x>0){
            if(v[pq.top().second]==0){
                sc+=pq.top().first;
                v[pq.top().second]=1;
                x--;
                if(pq.top().second-1>=0){
                v[pq.top().second-1]=1;
                //x--;   
                }
                if(pq.top().second+1<n){
                v[pq.top().second+1]=1;
                //x--;
                }
                pq.pop();
            }
            else {
                pq.pop();
                x--;
            }
                                    
            
        }
        return sc;
    }
};