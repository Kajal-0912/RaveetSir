/*      Hello everyone, these are the 10 questions. Try to solve them and we are going to discuss them in the session.
1.
https://practice.geeksforgeeks.org/problems/palindromic-array/0
2.
https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0
3.
https://leetcode.com/problems/search-a-2d-matrix/
4.
https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
5.
https://practice.geeksforgeeks.org/problems/sorted-matrix/0
6.
https://practice.geeksforgeeks.org/problems/max-rectangle/1
7.
https://www.geeksforgeeks.org/find-a-specific-pair-in-matrix/
8.
https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/
9.
https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1
10.
https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1        */

/*      1.
https://practice.geeksforgeeks.org/problems/palindromic-array/0       */

  // { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0; i<n; i++){
    	    int num = a[i];
    	    int rev =0;
    	    while(num>0){
    	        rev= rev*10 + num%10;
    	        num = num/10;
    	    }
    	    
    	    if(rev!=a[i]){
    	         return 0;
    	    }
    	    
    	}
    	return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends