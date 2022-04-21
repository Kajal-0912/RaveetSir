/* 8.
https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/        */

#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int n=3;
    int m=3;
    int temp[3][3];
    int counter = m-1;

    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            temp[j][counter] = arr[i][j];
        }
        counter--;
    } 
    for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }

    //using transpose and reverse
    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(arr[i],arr[i]+m);
    }


    for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //reversing by column
    for(int i=0; i<m; i++){
        int l=0, h=n-1;
        while(l<h){
            swap(arr[l++][i], arr[h--][i]);
        }
    }

     for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}