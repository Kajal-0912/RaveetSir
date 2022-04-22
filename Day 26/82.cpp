/* 9.
https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing/0   */


// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int count=0, ans=0;
        int n=S.length();
        vector<int> pos;
        
        int curr=0;
        
        for(int i=0; i<n; i++){
            if(S[i]=='['){
                pos.push_back(i);
            }
        }
        
        for(int i=0; i<n; i++){
            char c=S[i];
            
            if(c=='['){
                count++;
            }else{
                count--;
            }
            if(count<0){
                while(curr<pos.size() && pos[curr]<=i){
                    curr++;
                }
                if(curr<pos.size()){
                    swap(S[i], S[pos[curr]]);
                    ans+=(pos[curr]-i);
                    count=1;
                    curr++;
                }
            }
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends



