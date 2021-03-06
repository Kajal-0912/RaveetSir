/* Hello everyone, these are the 10 questions. Try to solve them and we are going to discuss them in the session.
1.
https://practice.geeksforgeeks.org/problems/three-way-partitioning/1
2.
https://practice.geeksforgeeks.org/problems/palindromic-array/0
3.
https://practice.geeksforgeeks.org/problems/find-the-median0527/1
4.
https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/
5.
https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0
6.
https://practice.geeksforgeeks.org/problems/trapping-rain-water/0
7.
https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0
8.
https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/
9.
https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0
10.
https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0     */

/* 1.
https://practice.geeksforgeeks.org/problems/three-way-partitioning/1    */

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 
        int n=arr.size();
        int  l=0; int h=n-1;
    
    int i=0;
    while(i<=h){
        if (arr[i]<a){
            swap(arr[i++],arr[l++]);
        }
        else if(arr[i]>b){
            swap(arr[i],arr[h--]);
        }else{
            i++;
        }
    }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        
        vector<int> array(N);
        unordered_map<int,int> ump;
        
        for(int i=0;i<N;i++){
            cin>>array[i];
            ump[array[i]]++;
        }
        
        int a,b;
        cin>>a>>b;
        
        vector<int> original = array;

        int k1=0,k2=0,k3=0;
        int kk1=0;int kk2=0;int kk3=0;
        
        for(int i=0; i<N; i++)
        {
            if(original[i]>b)
                k3++;
            else if(original[i]<=b and original[i]>=a)
                k2++;
            else if(original[i]<b)
                k1++;
        }
        
        Solution ob;
        ob.threeWayPartition(array,a,b);
      
        for(int i=0;i<k1;i++)
        {
            if(array[i]<b)
            kk1++;
        }
        
        for(int i=k1;i<k1+k2;i++)
        {
            if(array[i]<=b and array[i]>=a)
            kk2++;
            
        }
        
        for(int i=k1+k2;i<k1+k2+k3;i++)
        {
            if(array[i]>b)
            kk3++;
        }
        bool ok = 0;
        if(k1==kk1 and k2 ==kk2 and k3 == kk3)
            ok = 1;
        
        for(int i=0;i<array.size();i++)
            ump[array[i]]--;
        
        for(int i=0;i<array.size();i++)
            if(ump[array[i]]!=0)
                ok=0;
        
        if(ok)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        
    }
    
    return 0;
}
  // } Driver Code Ends