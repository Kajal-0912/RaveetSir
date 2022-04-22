/*  8.
https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0        */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string s)
		{
		    // Code here there
		   /* sort(s.begin(),s.end());
		    vector<string> ans;
		    
		    do{
		        ans.push_back(s);
		        
		    }while(next_permutation(s.begin(),s.end()));
		    
		    return ans;*/
		    
		    vector<string> ans;
		    allPermutations(s,0,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
		
		void allPermutations(string& s, int index, vector<string> &ans){
		    if(index>=s.length()){
		        ans.push_back(s);
		    }
		    for(int i=index; i<s.length();i++){
		        swap(s[index], s[i]);
		        allPermutations(s,index+1,ans);
		        swap(s[index],s[i]);
		    }
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends