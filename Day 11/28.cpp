/* Hello everyone, these are the 10 questions. Try to solve them and we are going to discuss them in the session.

1. 
https://leetcode.com/problems/merge-intervals/
2. 
https://leetcode.com/problems/next-permutation/
3.
https://practice.geeksforgeeks.org/problems/inversion-of-array/0
4. 
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
5. 
https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
6.
https://practice.geeksforgeeks.org/problems/common-elements1132/1
7.
https://practice.geeksforgeeks.org/problems/subarray-with-0-sum/0
8.
https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers/0
9. 
https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
10.
https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/            */


/*  1. 
https://leetcode.com/problems/merge-intervals/  */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
         ans.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++){
            if(ans.back()[1]>=intervals[i][0]){
                ans.back()[0]=min(ans.back()[0],intervals[i][0]);
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
                
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};