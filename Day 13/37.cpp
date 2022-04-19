/*  8.
https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers/0   */

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    string mul(string a, string b){
        if(a.length()<b.length()){
            string s=a;
            a=b;
            b=s;
        }
        int n = a.length();
        string res ="";
        
        for(int i=0; i<2*n+2; i++){
            res.push_back('0');
        }
        
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        for(int i=0; i<b.length(); i++){
            int x = b[i]-'0';
            int carry =0;
            
            for(int j=0; j<n; j++){
                int y=a[j]-'0';
                int val = x*y + carry+ (res[i+j]-'0');
                res[i+j] = (char)(val%10+'0');
                
                carry = val/10;
            }
            if(carry){
                res[i+n] = (char)(carry+'0');
            }
        }
        int j=res.length()-1;
        while(res[j]=='0'){
            res.pop_back();
            j--;
        }
        reverse(res.begin(), res.end());
        return res;
        
    }




    vector<int> factorial(int N){
        // code here
        vector<int> ans;
        
        string fact = "1";
        
        for(int i=2; i<=N; i++){
            string x = to_string(i);
            fact = mul(fact,x);
        }
        
        for(int i=0; i<fact.length(); i++){
            ans.push_back(fact[i]-'0');
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends