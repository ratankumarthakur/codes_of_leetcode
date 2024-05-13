#include <math.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int mins=INT_MAX;
        int n = prices.size();
        for(int i=0;i<n;i++){
            mins=min(mins,prices[i]);
            int c_pro=prices[i]-mins;
            pro=max(c_pro,pro);
        }
        return pro;
        
    }
};