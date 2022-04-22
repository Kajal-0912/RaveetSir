/*  3.
https://practice.geeksforgeeks.org/problems/count-the-reversals/0   */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    if(s.length()%2==1){
        return -1;
    }
    
    int count=0, ans=0;
    
    for(char c:s){
        if(c=='}'){
            count--;
        }else{
            count++;
        }
        if(count<0){
            ans++;
            count=1;
        }
    }
    
    return ans+count/2;
}