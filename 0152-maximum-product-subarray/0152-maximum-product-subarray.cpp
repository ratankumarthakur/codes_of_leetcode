class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=INT_MIN;int pre=1,suf=1,b=0;
        for(int i=0;i<nums.size();i++){
            // if(nums[i]<=0){
            //     b++;
            //     if(nums.size()==1 && nums[0]<0){
            //         return nums[0];
            //     }
            //     if(b==nums.size()){
            //         return 0;
            //     }
            // }
           if(pre==0)pre=1;if(suf==0)suf=1;
            pre*=nums[i];
            suf*=nums[nums.size()-i-1];
            
            m=max(m,max(pre,suf));
        }return m;
    }
};