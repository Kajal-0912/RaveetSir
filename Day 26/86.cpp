/*      3.
https://practice.geeksforgeeks.org/problems/consecutive-elements/0      */

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        string curr;
        curr.push_back(s[0]);
        
        go(s,1,curr);
        
        /*
        for(int i=0; i<s.length(); i++){
            if(curr[curr.size()-1]!=s[i]){
                curr.push_back(s[i]);
            }
            
        }
        */
        
        
        
        
        
        return curr;
    }
    
    void go(string &s, int index, string & curr){
        if(index == s.length()){
            return;
        }
        
        if(curr[curr.size()-1] != s[index]){
            curr.push_back(s[index]);
        }
        
        go(s,index+1,curr);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends