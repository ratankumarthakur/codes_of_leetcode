class Solution {
    public void sortColors(int[] nums) {
        int len=nums.length;
        for(int h=0;h<len;h++){
             for(int i=0;i<len-1;i++){
            if(nums[i]>=nums[i+1]){
                int temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
        }
        }
        System.out.print("[ ");
        for(int i=0;i<len;i++){
            System.out.print(nums[i]+",");
        }System.out.print(" ]");
    }
}