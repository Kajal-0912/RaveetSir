/*      4.
https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1       */

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max1 = 0;
	    int ind = -1;
	    
	    for(int i=0; i<n; i++){
	        int num1 = m -(lower_bound(arr[i].begin(),arr[i].end(),1)-arr[i].begin());
	        
	        if(num1>max1){
	            max1=num1;
	            ind = i;
	        }
	    }
	    return ind;

        //using another approach
        int ind = -1;
        int i=0, j=m-1;

        while(i<n && j>=0){
            if(arr[i][j]==0){
                i++;
            }else{
                ind = i;
                j--;
            }
        }

        return ind;




	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends