/*  8.
https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/   */

#include <iostream>
#include<climits>
using namespace std;

int maxtwobuysell(int arr[],int size) {
	int n = size;
    int leftMax[n];
    int rightMax[n];

    leftMax[0]=0;
    int min_buy = arr[0];
    for(int sell=1; sell<n; sell++){
        leftMax[sell] = max(leftMax[sell-1], arr[sell]-min_buy);
        min_buy = min(arr[sell], min_buy);
    }

    rightMax[n-1]=0;
    int max_sell = arr[n-1];

    for(int i=n-2; i>=0; i--){
        rightMax[i]= max(rightMax[i+1], max_sell-arr[i]);
        max_sell = max(max_sell,arr[i]);
    }

    int max_profit =0;
    for(int i=1; i<n-1; i++){
        max_profit=max(max_profit, leftMax[i-1]+rightMax[i]);
    }
    return max_profit;
}

int main() {

	int arr[] = {2, 30, 15, 10, 8, 25, 80};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<maxtwobuysell(arr,size);
	return 0;
}
