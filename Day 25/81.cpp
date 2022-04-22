/*      8.
https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence/0     */


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
       /* unordered_map<string, int> freq;
        
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        
        set<pair<int, string>> s;
        
        for(auto p: freq){
            s.insert({p.second, p.first});
            if(s.size()>2){
                s.erase(s.begin());
            }
        }
        
        auto x=*(s.begin());
        return x.second;    */
        
        map<string,int> mp;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
       
       int mx = INT_MIN,mx2=INT_MIN;
       
       for(auto x:mp){
           mx = max(mx,x.second);
       }
       string ans ;
       for(auto x:mp){
           if(x.second>mx2 && x.second < mx){
               mx2 = x.second;
               ans = x.first;
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
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
