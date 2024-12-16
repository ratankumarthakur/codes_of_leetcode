class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        while(k--){
            int m=INT_MAX;
            int c=0;
            for(int i=nums.size()-1;i>=0;i--){
               if(nums[i]<=m){
                   m=nums[i];
                   c=i;
               }
                
            }
//             for(int i=nums.size()-1;i>=0;i--){
//                 if(nums[i]==m){
//                     c=i;
//                 }
                
//             }
            nums[c]*=mul;
            
        }
        return nums;
    }
};