/*      3.
https://www.programiz.com/java-programming/examples/check-valid-shuffle-of-strings      */

#include<bits/stdc++.h>

using namespace std;

bool valid(string s1, string s2, string s3){
     int i=0, j=0, k=0;
    while(k<s1.length() + s2.length()){
        if(s1[i]==s3[i]){
            i++;
            k++;
        }else if(s2[j]==s3[k]){
            j++;
            k++;
        }else{
            return false;
        }
    }
    return true;
}

int main(){

    string s1, s2, shuffle;
    cin>>s1>>s2>>shuffle;

   cout<<valid(s1,s2,shuffle)<<endl;

    return 0;
}