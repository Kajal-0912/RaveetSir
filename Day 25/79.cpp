/*  6.
https://leetcode.com/problems/longest-common-prefix/    */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        
        int n=strs.size();
        int index =0;
        
        while(true){
            if(index>=strs[0].length()){
                return res;
            }
            
            char c=strs[0][index];
            bool flag=true;
            
            for(int i=0; i<n; i++){
                if(index>=strs[i].length() or strs[i][index]!=c){
                    flag = false;
                    break;
                }
            }
            if(!flag){
                return res;
            }
            res.push_back(c);
            index++;
        }
    }
};
