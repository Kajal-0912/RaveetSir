/*  Hello everyone, these are the 10 questions. Try to solve them and we are going to discuss them in the session.

1. https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
2. https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
3. https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
4. https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
5. https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
6.
https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
7.
https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
8.
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
9. 
https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
10.
https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1        */

//1. https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
 
  //for(int i = str.size(); i>=0; i--){
    //  s.push_back(str[i]);
  //
    
    int start =0;
    int end = str.size() -1;
    int temp;
    
    while(start<end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
    
  return str;
}
