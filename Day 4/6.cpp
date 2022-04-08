/*Print the Pattern */

/*          *
           ***
            *
            


            **
           ****
           ****
            **


            *
           ***
          *****
           ***
            *       */

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
       for(int star = 1; star<=total_stars; star++){
           cout<<"*";
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
       for(int star = 1; star<=total_stars; star++){
           cout<<"*";
       }
       cout<<"\n";
   }

    return 0;
}

