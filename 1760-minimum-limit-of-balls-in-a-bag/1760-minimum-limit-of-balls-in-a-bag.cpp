class Solution {
public:
    bool check(vector<int>& nums,int o,int h){
        for(int i=0;i<nums.size();i++){
            o-=(nums[i]/h);
        if(nums[i]%h==0)o++;
        }
        return o>=0;
    }
    int minimumSize(vector<int>& nums, int o) {
        int s=1,e=INT_MAX,ans=0;
        // if(nums.size()==1){
        //     return nums[0];
        // }
        while(s<=e){
            int m=s+(e-s)/2;
            if(check(nums,o,m)){
                ans=m;
                e=m-1;
            }else{
                s=m+1;
            }
        }
        return ans;
    }
    
};