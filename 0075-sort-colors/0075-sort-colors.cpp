class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        int c0=0,c1=0,c2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) 
                c0++;
            else if(arr[i]==1) 
                c1++;
            else 
                c2++;
        }
        for(int i=0;i<c0;i++){
            arr[i]=0;
        }
        for(int i=c0;i<c0+c1;i++){
            arr[i]=1;
        }
        for(int i=c0+c1;i<arr.size();i++){
            arr[i]=2;
        }
        
        
        
        for (auto x : arr) 
        cout << x << " "; 
    }
};