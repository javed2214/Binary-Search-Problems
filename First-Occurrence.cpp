// Program to Find First Occurrence of Element in a Sorted Array
// Using Property of Binary Search

#include<bits/stdc++.h>
using namespace std;

int firstOccurr(int *a, int start, int end, int x){

	int res=-1;
	
	while(start <= end){

		int mid=(start + end)/2;
		
		if(x==a[mid]){
			res=mid;
			end=mid-1;
		}
		else if(x < a[mid]) end = mid - 1;
		else if(x > a[mid]) start = mid + 1;
	}

	return res;
}

int main(){

	int a[]={2,2,5,5,5,6,6,8,9,9};
	int n=sizeof(a)/sizeof(int);

	int x=5;

	cout<<"Index: "<<firstOccurr(a,0,n-1,x);

	return 0;
}