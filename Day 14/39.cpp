/*  Print all array elements appearing more than N / K times
10.
https://www.geeksforgeeks.org/print-all-array-elements-appearing-more-than-n-k-times/ */

//MEDIUM  

#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {0,1,0,1,2,3,4,3,1,2,2,1,3,2,1,0};
    sort(arr, arr+16);
    int n=16;
    int k=5;
    unordered_map<int, int> freq;
    vector<int> ans;


    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(pair<int, int> p : freq){

        if(p.second > n/k){
            ans.push_back(p.first);
        }
        cout<<p.first<<" :( "<<(upper_bound(arr,arr+n,p.first)-lower_bound(arr, arr+n, p.first))<<","<<p.second<<")"<<endl;
    }

    for(int x : ans){
        cout<<x<<" ";
    }
    
    return 0;
}


