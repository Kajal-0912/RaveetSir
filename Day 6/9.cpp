/* Given an array :
    a1, a2, a3, a4,................,an-1, an

    print value of:
    (a1*a2*a3*......an-1 + a2*a3*a4*..........an + a3*a4*a5*....an*a1 + a4*a5*a6*....a1*a2 + ....) / a1+a2+a3+a4+...+an
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int totpro = 1;
    int totsum = 0;
    int numsum = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        totpro = totpro * a[i];
        totsum = totsum + a[i];
    }

    for(int i=0; i<n; i++){
        numsum = numsum + (totpro / a[i]);
    }
    int res;
    res = numsum/totsum;
    cout<<res<<endl;



    return 0;

}