/*
S = 1 + (1+2)/(1!+2!)*(1!*2!) + (1+2+3)/(1!+2!+3!)*(1!*2!*3!) +.....+(1+2+3+......n)/(1!+2!+3!+.....n!)*(1!*2!*3!*.....n!)
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    double n;
    cin>>n;
    double fact = 1;
    double num_sum = 0;
    double den_sum = 0;
    double den_pro = 1;
    double res = 0;

    for(int i=1; i<=n; i++){
        fact = fact * i;
        num_sum = num_sum + i;
        den_sum = den_sum + fact;
        den_pro = den_pro * fact;
        res = res + (num_sum / (den_sum*den_pro));
    }

    cout<<res;

    return 0;
}