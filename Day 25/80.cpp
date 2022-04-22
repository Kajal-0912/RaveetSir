/*  7.
https://practice.geeksforgeeks.org/problems/min-number-of-flips/0       */


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string s)
{
    // your code here
    int n=s.length();
    int flipo = 0, flipe=0;
    
    for(int i=0; i<n; i++){
        if((i%2==0 && s[i]=='0') or (i%2==1 && s[i]=='1')){
            flipo++;
        }
    }
    
     for(int i=0; i<n; i++){
        if((i%2==1 && s[i]=='0') or (i%2==0 && s[i]=='1')){
            flipe++;
        }
    }
    
    return min(flipo, flipe);
}