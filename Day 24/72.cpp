/* REDUCE ARRAY SIZE TO HALF */

/*  https://leetcode.com/problems/reduce-array-size-to-the-half/    */

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> freq;
        int n=arr.size();
        
        for(int i=0;i<n; i++){
            freq[arr[i]]++;
        }
        
        vector<int> v;
        for(auto x: freq){
            v.push_back(x.second);
        }
        sort(v.begin(), v.end(), greater<int>());
        
        int count =0;
        
        for(int i=0; i<v.size(); i++){
            count=count+v[i];
            if(count>=n/2){
                return i+1;
            }
        }
        return -1;
    }
};