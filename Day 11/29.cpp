/*  2. 
https://leetcode.com/problems/next-permutation/ */


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int first = -1;
        int n = nums.size();
        for(int i=n-1; i>=1; i--){
            if(nums[i-1] < nums[i]){
                first = i;
                break;
            }
        }
        if(first == -1){
            sort(nums.begin(), nums.end());
            return ;
        }
        int second = -1;
        
        for(int i=first; i<n; i++){
            if(nums[i] > nums[first-1]){
                second = i;
            }
        }
        
        int temp = nums[second];
        nums[second] = nums[first -1];
        nums[first-1] = temp;
        sort(nums.begin()+ first, nums.end());
        
    }
};

