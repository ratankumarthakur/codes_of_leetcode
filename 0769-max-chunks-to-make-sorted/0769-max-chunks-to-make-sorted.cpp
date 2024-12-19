class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size(),m=0,c=0;
        for(int i=0;i<n;i++){
            m=max(m,arr[i]);
            if(m==i)c++;
        }return c;
    }
};