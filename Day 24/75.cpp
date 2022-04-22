/*      2.
https://practice.geeksforgeeks.org/problems/parenthesis-checker/0       */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(char c:x){
            if(c=='{' or c=='(' or c=='['){
                st.push(c);
            }else{
                if(st.empty()){
                    return false;
                }
                if(c=='}' && st.top()=='{'){
                    st.pop();
                }else if(c==')' && st.top()=='('){
                    st.pop();
                }else if(c==']' && st.top()=='['){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        
        return st.empty();
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends