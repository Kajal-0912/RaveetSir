/*Write a function to take string as input and return string with all capital letters.*/


#include<bits/stdc++.h>

using namespace std;

string converttoupper(string s){
    string res ="";

    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(c-'a'>=0 && c-'a'<=25){
            c = c - 'a' + 'A';
        }
        res.push_back(c);
    }
    return res;
}

int main(){

    string s;
    cin>>s;
    string ans;
    ans = converttoupper(s);
    cout<<ans;
    return 0;
}