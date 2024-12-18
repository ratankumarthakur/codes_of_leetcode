class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1; j<n&&j<i+k+1 ;j++){
                if(arr[j]==arr[i]){
                    return true;
                }
            }
        }return false; 
    }
};