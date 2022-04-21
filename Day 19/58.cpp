/*  9.
https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1     */

// { Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends



int kthSmallest(int arr[MAX][MAX], int n, int k)
{
  //Your code here
  //priority_queue<int> pq;
  
//  for(int i=0; i<n; i++){
    //  for(int j=0; j<n; j++){
      //    if(pq.size()<k){
    //          pq.push(mat[i][j]);
  //        }else{
//              pq.push(mat[i][j]);
        //      pq.pop();
      //    }
    //  }
  //}
 // return pq.top();
  
  int l= arr[0][0];
  int h=arr[n-1][n-1];
  int ans = l;
  
  while(l<=h){
      int mid = (l+h)/2;
      
      int count = 0;
      for(int i=0; i<n; i++){
          count = count + (lower_bound(arr[i], arr[i]+n, mid)-arr[i]);
          
          
      }
      if(count<=k-1){
          ans = mid;
          l = mid+1;
      }else{
          h=mid-1;
      }
  }
  return ans;
  
  
  
}
