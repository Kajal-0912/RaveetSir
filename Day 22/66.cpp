/*      5.
https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0        */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
      /*  int n=S.length();
        int ansS = -1, ansE= -2;
        
        for(int start =0; start<n; start++){
            for(int end = start; end<n; end++){
                string front = S.substr(start,end-start+1);
                string back=front;
                reverse(back.begin(),back.end());
                
                if(front==back && end-start+1 > ansE-ansS+1){
                    ansS = start;
                    ansE = end;
                }
            }
        }
        
        return S.substr(ansS, ansE-ansS+1); */
        
        int n=S.length();
        string r = "#";
        
        for(int i=0; i<n; i++){
            r.push_back(S[i]);
            r.push_back('#');
        }
        
        int m = r.length();
        int palin[m];
        int index=0;
        
        
        for(int i=0; i<m; i++){
            int l=i-1;
            int h=i+1;
            
            int count=0;
            while(l>=0 && h<m && r[l]==r[h]){
                l--;
                h++;
                count++;
            }
            
            palin[i]=count;
           // cout<<palin[i]<<" ";
           
           if(palin[index]<palin[i]){
               index=i;
           }
            
        }
        
        int l=index-palin[index];
        int h=index+palin[index];
        
        string ans="";
        for(int i=l; i<=h; i++){
            if(r[i]!='#'){
                ans.push_back(r[i]);
            }
        }
        
        
        return ans;
        
        
        
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends