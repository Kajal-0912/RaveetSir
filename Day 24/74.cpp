/* Hello everyone, these are the 10 questions. Try to solve them and we are going to discuss them in the session.
1.
https://www.geeksforgeeks.org/convert-sentence-equivalent-mobile-numeric-keypad-sequence/
2.
https://practice.geeksforgeeks.org/problems/parenthesis-checker/0
3.
https://practice.geeksforgeeks.org/problems/count-the-reversals/0
4.
https://practice.geeksforgeeks.org/problems/find-the-string-in-grid/0
5.
https://practice.geeksforgeeks.org/problems/roman-number-to-integer/0
6.
https://leetcode.com/problems/longest-common-prefix/
7.
https://practice.geeksforgeeks.org/problems/min-number-of-flips/0
8.
https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence/0
9.
https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing/0
10.
https://practice.geeksforgeeks.org/problems/smallest-distant-window/0       */

/*1.
https://www.geeksforgeeks.org/convert-sentence-equivalent-mobile-numeric-keypad-sequence/   */

// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;

// Function which computes the sequence
string printSequence(string arr[],
					string input)
{
	string output = "";


	int n = input.length();
	for (int i=0; i<n; i++)
	{
	
		if (input[i] == ' ')
			output = output + "0";

		else
		{
			
			int position = input[i]-'A';
			output = output + arr[position];
		}
	}

	// Output sequence
	return output;
}

// Driver function
int main()
{
	// storing the sequence in array
	string str[] = {"2","22","222",
					"3","33","333",
					"4","44","444",
					"5","55","555",
					"6","66","666",
					"7","77","777","7777",
					"8","88","888",
					"9","99","999","9999"
				};

	string input = "KAJAL";
	cout << printSequence(str, input);
	return 0;
}


