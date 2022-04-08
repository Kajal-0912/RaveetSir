/*  n=5      1
           1 2 3
         4 5 6 7 8
          10 11 12
             13  


    n=4
            1 2
          3 4 5 6
          7 8 9 10
           11 12

    Yet to be done

*/


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

     int total_spaces, total_stars;

   for(int i=1; i<=n/2; i++){
        if(n%2==0){
            total_spaces = n-(2*i);
            total_stars = n - total_spaces;
        }else{
            
            total_stars = (2*i)-1;
            total_spaces = n-total_stars;
        }

       for(int space = 1; space<=total_spaces/2; space++){
           cout<<" ";
       }
        
        for(int j=2*i-1; j<=n*i - 2; j++){
            cout<<j;
        }
           
        
       
       cout<<"\n";
       
   }

    if(n%2==1){
        int total_stars = n;
        for(int star=1; star<=total_stars; star++){
            cout<<"*";
        }
        cout<<"\n";
    }


   for(int i=n/2; i>=1; i--){
       if(n%2==0){
            total_spaces = n-(2*i);
            total_stars = n - total_spaces;
        }else{
            total_stars = (2*i)-1;
            total_spaces = n-total_stars;
        }
       

       for(int space = 1; space<=total_spaces/2; space++){
           cout<<" ";
       }
        int k=i+1;
        for(int j= 2*k+1; j<=2*n+2; j++){
            cout<<j;
        }      
        k++;

       cout<<"\n";
   }
    

    return 0;
}
