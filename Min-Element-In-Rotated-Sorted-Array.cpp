// Program to Find Minimum Element in a Rotated Sorted Array
// https://www.youtube.com/watch?v=4qjprDkJrjY
// Time Complexity: O(log(n))
// Binary Search

#include<bits/stdc++.h>
using namespace std;

int findMin(int *a, int x, int y){

	int l = x;
	int r = y - 1;
	int n = y;  // Size of Array

	while(l <= r){

		if(a[l] <= a[r]) return l;
		int mid = (l + r) / 2;
		int next = (mid + 1) % n;  // %n is used to Avoid Overflow 
		int prev = (mid - 1 + n) % n;	// +n is used to Avoid Underflow
		if(a[mid] <= a[prev] and a[mid] <= a[next]) return mid;
		else if(a[mid] >= a[l]) l = mid + 1;
		else if(a[mid] <= a[r]) r = mid - 1;
	}
	return -1;
}

int main(){

	int a[] = {4,5,6,7,0,1,2};	// 0 is the Min Element
	int n = sizeof(a)/sizeof(int);

	int x = findMin(a,0,n);
	if(x == -1) cout<<"Array is Empty!";
	else cout<<a[x];

	return 0;
}