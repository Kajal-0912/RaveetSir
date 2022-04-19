/*  9.
https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0  */

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        //Your Code Here
        sort(a, a+n);
        for(int i=0; i<n-2; i++){
            int y=a[i];
            int target = X-y;
        
            int l=i+1, h=n-1;
            while(l<h){
                int sum = a[l]+a[h];
                if(sum==target){
                    return true;
                }else if(sum<target){
                    l++;
                }else{
                     h--;
                }
            }
        }
        return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends