#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=6;
   

    int arr[] = {6,2,5,4,1,6};

    stack<int> s;
    int nsl[n];

    //nsl
    for(int i=0; i<n; i++){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            s.pop();
        }
        nsl[i] = (s.empty() ? -1 : s.top());
        s.push(i );
    }

    for(int i=0; i<n; i++){
        cout<<nsl[i]<<" ";
    }


    //nsr
    int nsr[n];
     for(int i=n-1; i>=0; i--){
        while(!s.empty() && arr[s.top()]<=arr[i]){
            s.pop();
        }
        nsr[i] = (s.empty() ? -1 : s.top());
        s.push(i );
    }

    for(int i=0; i<n; i++){
        cout<<nsr[i]<<" ";
    }

    return 0;
}