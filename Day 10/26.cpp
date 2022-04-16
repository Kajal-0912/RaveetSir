/* https://leetcode.com/problems/4sum/  */

//MEDIUM

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int i,j,k,l;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(j=i+1;j<n-2;j++)
            {
                
                if(j>i+1 && nums[j]==nums[j-1])
                continue;
                
                k=j+1;
                l=n-1;
                
                while(k<l)
                {
                    long sum=(long)((long)nums[i]+(long)nums[j]+(long)nums[k]+(long)nums[l]);
                    
                    if(sum<target)
                        k=k+1;
                    else if(sum>target)
                            l=l-1;
                    else
                    {
                        result.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k=k+1;
                        l=l-1;
                        
                        while(k<l && nums[l]==nums[l+1])
                            l=l-1;
                        while(k<l && nums[k]==nums[k-1])
                            k=k+1;
                    }
                }
            }
        }
        return result;
    }
};

//uSING POINTERS

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size()==0) return res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        // we are taking 2 pointer i and j 
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                // this makes the equation of a+b+c+d = target as c+d = target -a -b
                int target_2 = target - nums[i] - nums[j];
                int start = j+1; // this will be the starting pointer in the remaining array
                int end = n-1; // this will be the ending pointer
                while(start<end)
                {
                    int two_sum = nums[start] + nums[end];
// if this condition is true so we need to increase our sum and we know that array is sorted so we will increase the starting pointer
                    if(two_sum<target_2) start++;
// if this condition is true so we need to decrease our sum and we know that array is sorted so we will decrease the end pointer
                    else if(two_sum>target_2) end--;
                    // else this will form the ans 
                    else
                    {
                        vector<int> temp(4,0);
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[start];
                        temp[3] = nums[end];
                        
                        res.push_back(temp);
            // we are skipping the duplicates here from front for number 4
            while(start<end && nums[start] == temp[2]) ++start;
            // we are skipping the duplicates here from end for number 3
            while(start<end && nums[end] == temp[3]) --end;
                    }
                }
				// we are skipping the duplicates here for number 2
                while(j+1<n && nums[j+1] == nums[j]) ++j;
            }
			// we are skipping the duplicates here for number 1
            while(i+1<n && nums[i+1] == nums[i]) ++i;
        }
        return res;
    }
};