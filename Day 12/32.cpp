/*  4. 
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/  */
#include<bits/stdc++.h>

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int max_profit = INT_MIN;
        int min_buy = arr[0];
        int n = arr.size();
        for(int i=1; i<n; i++){
            max_profit = max(max_profit, arr[i] - min_buy);
            min_buy = min(min_buy , arr[i]);
        }
       
        if(max_profit<=0){
            return 0;
        }else{
            return max_profit;
        }
    }
};