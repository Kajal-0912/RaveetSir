/*  10.
https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0     */


// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complete the function
        int wsize=0;
        for(int i=0; i<n; i++){
            if(arr[i]<=k){
                wsize++;
            }
        }
        
        int count=0;
        for(int i=0; i<wsize; i++){
            if(arr[i]<=k){
                count++;
            }
        }
        
        int ans=wsize-count;
        
        for(int i=wsize; i<n; i++){
            if(arr[i-wsize]<=k){
                count--;
            }
            if(arr[i]<=k){
                count++;
            }
            ans = min(ans, wsize-count);
        }
        
        return ans;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends