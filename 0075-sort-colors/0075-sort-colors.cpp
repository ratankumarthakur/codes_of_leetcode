class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        for (auto x : nums) 
        cout << x << " "; 
    }
};