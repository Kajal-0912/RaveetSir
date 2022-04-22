/*  2.
https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/        */

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
       /* int n=s1.length();
        for(int rot = 1; rot<=n; rot++){
            if(s1==s2){
                return true;
                break;
            }
            
            char last = s1[s1.length()-1];
            s1.pop_back();
            s1.insert(s1.begin(), last);
            
        }
        
        return false;   */
        
        string temp = s1+s1;
        
      /*  for(int i=0; i<temp.length()-s2.length(); i++){
            bool cond = true;
            
            for(int j=0; j<s2.length(); j++){
                if(temp[i+j]!= s2[j]){
                    cond = false;
                    break;
                }
            }
            
            if(cond){
                return true;
            }
        } 
        
        return false;   */
        
        return temp.find(s2) != string::npos;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends