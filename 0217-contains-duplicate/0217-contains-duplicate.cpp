class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n=arr.size();set<int> s;
        for(int i=0;i<n;i++){
            
            s.insert(arr[i]);
        }
        if(s.size()==n){
            return false;
        }else {
            return true;
        }
    }
};