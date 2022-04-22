/*  7.
https://www.geeksforgeeks.org/recursively-print-all-sentences-that-can-be-formed-from-list-of-word-lists/       */

#include<bits/stdc++.h>

using namespace std;

void go( vector<vector<string>>& input, int row, vector<string>&curr){
    if(row==input.size()){
        for(string x: curr){
            cout<<x<<" ";
        }
        cout<<"\n";
        return;
    }

    for(int i=0; i<input[row].size();i++){
        curr.push_back(input[row][i]);
        go(input, row+1, curr);
        curr.pop_back();

    }


}

int main(){

    vector<vector<string>> input = {{"you","we"},
                                    {"have","are"},
                                    {"sleep","eat","drink"}};

    vector<string> curr;
    go(input,0, curr);
    return 0;
}