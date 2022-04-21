/*      10.
https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1        */

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here 
        
     //   int nsl[n]={0};
     //   int nsr[n]={0};
     //   stack<long long> st;
    //    while(st.size()>0){
    //        st.pop();
    //    }
        
     //   for(long long i=0;i<n; i++){
    //        while(!st.empty() && arr[st.top()] >= arr[i]){
     //           st.pop();
    //        }
    //        nsl[i] = (st.empty()?-1:st.top());
     //       st.push(i);
  //      }
  //      while(st.size()>0){
   //         st.pop();
   //     }
        
        
     //    for(long long i=n-1;i>=0; i--){
     //       while(!st.empty() && arr[st.top()] >= arr[i]){
    //            st.pop();
    //        }
     //       nsr[i] = (st.empty()?n:st.top());
    //        st.push(i);
   //     }
        
    //    long long max_area = INT_MIN;
    //    for(long long i=0; i<n; i++){
     //       max_area = max(max_area, (nsr[i]-nsl[i]-1)*arr[i]);
            
   //     }
        
        //return max_area;
        
        
        stack<int> s;
        long long answer =0, i=0;
        while(i<n){
            if(s.empty() or arr[i]>=arr[s.top()]){
                s.push(i++);
            }
            else{
                int top = s.top();
                s.pop();
                answer=max(answer,(arr[top]*(s.empty()?i:i-s.top()-1)));
            }
        }
        
        while(!s.empty()){
            int top=s.top();
            s.pop();
            answer = max(answer,(arr[top]*(s.empty()?i:i-s.top()-1)));
        
            
        }
        
        return answer;
        
        
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends