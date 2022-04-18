#include<bits/stdc++.h>

using namespace std;

int main(){
    int count = 0;
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        bool flag=false;
        int x=i;
        while(x>0){
            if(x%10==9){
                flag = true;
                break;
            }
            x = x/10;
        }
        if(flag){
            count++;
            cout<<i<<" ";
        }
    }
    cout<<count<<endl;

    return 0;
}