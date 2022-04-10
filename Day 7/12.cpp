 /*Write a program for taking n student marks and get sum of "k" maximum and "k" minimum elements. */

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int max_sum = 0;
    int min_sum = 0;
    int k;
    cin>>k;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    for(int i=0; i<k; i++){
        min_sum = min_sum + arr[i];
    }
    cout<<min_sum<<endl;


    for(int i=n-1; i>=n-k; i--){
        max_sum = max_sum + arr[i];
    }
    cout<<max_sum<<endl;
    int res;

    res = min_sum + max_sum;
    cout<<res<<endl;

    return 0;
}