/*
n<=6
S = 1!/1 + 1!+2!/(1!*2!) +  1!+2!+3!/(1!*2!*3!) +..... 1!+2!+3!...n!/(1!*2!*3!*..n1)
*/

#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;

    int fact = 1;
    int numsum = 0;
    int denpro = 1;
    int res = 0;
    for(int i=1; i<=n; i++){
        fact = fact * i;
        numsum = numsum + fact;
        denpro = denpro * fact;
        res = res + (numsum/ denpro);
    }

    cout<<res;

    return 0;
}