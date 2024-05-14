class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=INT_MIN;
        int c_mx=0;
        
        for(int i=0;i<nums.size();i++){
            c_mx+=nums[i];
            
            if(c_mx>mx){
                mx=c_mx;
            }
            if(c_mx<0){
                c_mx=0;
            }
        }return mx;
    }
};