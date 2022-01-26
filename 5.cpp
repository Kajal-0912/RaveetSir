/* Print the Pattern */

/*          * *
             *
            * *


            *  *
             **
             **
            *  *

            *   *
             * *
              *
             * *
            *   *       */

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    
     for(int i=1; i<=n/2; i++){

        int total_spaces = (i-1)*2;
        int total_stars = n-total_spaces;

        for(int j=1; j<=total_spaces/2; j++){
            cout<<" ";
        }
        for(int k=1; k<=total_stars; k++){
            if(k==1 or k==total_stars){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
       
        cout<<"\n";
    }

    if(n%2==1){
        int total_spaces = n-1;
        for(int space = 1; space<=total_spaces/2;space++){
            cout<<" ";
        }
        cout<<"*\n";
    }






    for(int i=n/2; i>=1; i--){
        int total_spaces = (i-1)*2;
        int total_stars = n- total_spaces;
        for(int j=1; j<=total_spaces/2; j++){
            cout<<" ";
        }
        for(int k=1; k<=total_stars; k++){
            if(k==1 or k==total_stars){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0; 
}