/*  5.
https://practice.geeksforgeeks.org/problems/roman-number-to-integer/0   */

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    
    int go(string s, unordered_map<char,int> romans){
        if(s.length()==0){
            return 0;
        }
        
        char max_val_symbol = s[0];
        int pos = 0;
        int n=s.length();
        
        for(int i=1; i<n; i++){
            if(romans[s[i]] > romans[max_val_symbol]){
                max_val_symbol = s[i];
                pos = i;
            }
        }
        
        int i=pos;
        while(i<n && s[i]==max_val_symbol){
            i++;
        }
        
        string leftS = s.substr(0,pos);
        string rightS = s.substr(i);
        
        int left= go(leftS, romans);
        int right =go(rightS, romans);
        
        return romans[max_val_symbol]*(i-pos) -left + right;
    }
  
  
  
  
  
    int romanToDecimal(string &str) {
        // code here
        
        vector<pair<char,int>> roman = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        unordered_map<char, int> romans;
        
        for(auto k: roman){
            romans[k.first]=k.second;
        }
        
        return go(str,romans);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends
