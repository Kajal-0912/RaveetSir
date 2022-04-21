/*      2.
https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0      */


// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        // code here 
        vector<int> ans;
        int i, j,k,l;
        i=0;
        j=c-1;
        k=r-1;
        l=0;
        
        while(ans.size()<r*c){
            for(int p=i; p<=j; p++){
                ans.push_back(arr[i][p]);
            }
            i++;
            
            if(ans.size()>=r*c){
                break;
            }
            
            for(int p=i; p<=k; p++){
                ans.push_back(arr[p][j]);
            }
            j--;
            
            if(ans.size()>=r*c){
                break;
            }
            
            for(int p=j; p>=l; p--){
                ans.push_back(arr[k][p]);
            }
            k--;
            
            if(ans.size()>=r*c){
                break;
            }
            
            for(int p=k; p>=i; p--){
                ans.push_back(arr[p][l]);
            }
            l++;
            
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends      