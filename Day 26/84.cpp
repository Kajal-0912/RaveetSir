/*      Hello everyone, these are the 10 questions. Try to solve them and we are going to discuss them in the session.
1.
https://practice.geeksforgeeks.org/problems/k-anagrams-1/0
2.
https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string/0
3.
https://practice.geeksforgeeks.org/problems/consecutive-elements/0
4.
https://practice.geeksforgeeks.org/problems/wildcard-string-matching/0
5.
https://www.geeksforgeeks.org/transform-one-string-to-another-using-minimum-number-of-given-operation/
6.
https://practice.geeksforgeeks.org/problems/isomorphic-strings/0
7.
https://www.geeksforgeeks.org/recursively-print-all-sentences-that-can-be-formed-from-list-of-word-lists/
8.
https://www.geeksforgeeks.org/program-generate-possible-valid-ip-addresses-given-string/
9.
https://practice.geeksforgeeks.org/problems/smallest-distant-window/0
10.
https://www.geeksforgeeks.org/minimum-characters-added-front-make-string-palindrome/        */

/*  1.
https://practice.geeksforgeeks.org/problems/k-anagrams-1/0      */

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        unordered_map<string, vector<string>> driver;
        
        for(int i=0; i<s.size(); i++){
            string temp = s[i];
            sort(temp.begin(), temp.end());
            driver[temp].push_back(s[i]);
        }
        
        vector<vector<string>> ans;
        
        for(auto p: driver){
            ans.push_back(p.second);
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends