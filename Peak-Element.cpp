// Program to Find Peak Element in an Array
// A Peak Element is an Element which is Greater than its Neighbour
// Time Complexity : O(log(n))
// Binary Search
// Return the Index of any One Peak Element

#include<bits/stdc++.h>
using namespace std;

int peakElement(int *a, int n){

	if(n <= 1) return 0;

	int l = 0;
	int r = n - 1;

	while(l <= r){

		int mid = (l + r) / 2;

		if((mid == 0 or a[mid] >= a[mid-1]) and (mid == n-1 or a[mid] >= a[mid+1]))
			return mid;
		else if(mid > 0 and a[mid-1] > a[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return -1;	
}

int main(){

	int a[]={1,2,1,3,5,6,4};	// Index 1 or 5 is the Peak Element
	int n = sizeof(a)/sizeof(int);

	cout<<peakElement(a,n);

	return 0;
}
