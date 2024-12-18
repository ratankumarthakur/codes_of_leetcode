class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]<=arr[i]){
                    arr[i]-=arr[j];
                    break;
                }
            }
        }
        return arr;
    }
};