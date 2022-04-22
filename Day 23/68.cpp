/*  7.
https://www.geeksforgeeks.org/print-subsequences-string/    */

#include<bits/stdc++.h>

using namespace std;

vector<string> ans;

void allSubSequence(string s, int index, string curr){

    if(index>=s.length()){
        ans.push_back(curr);
        return ;
    }

    //not include
    allSubSequence(s,index+1,curr);
    //include
    curr.push_back(s[index]);
    allSubSequence(s, index+1,curr);

    //LEXIOGRAPHICALLY SORTED
    /* if(index<0){
        string temp=curr;
        reverse(temp.begin(),temp.end());
        ans.push_back(curr);
        return ;
    }

    //not include
    allSubSequence(s,index-1,curr);
    //include
    curr.push_back(s[index]);
    allSubSequence(s, index-1,curr);   
    curr.pop_back(); */

}

int main(){
    int n=4;
    string s= "abcd";
    string res="";

    //allSubSequence(s,0,res);
    //LEXIOGRAPHICALLY SORTED
    //allSubSequence(s,n-1,res);



    // bit manipulation
    for(int i=0; i<1<<n;i++){
        string res="";
        for(int b=0; b<n; b++){
            if((i&(1<<b))!=0){
                res.push_back(s[b]);
            }
        }
        ans.push_back(res);
    }
    


    for(string p:ans){
        cout<<p<<",";
    }
    cout<<endl;




    return 0;
}