// Program to Find Last Occurrence Element in a Sorted Array
// Using Binary Search

#include<bits/stdc++.h>
using namespace std;

int lastOccurr(int *a, int start, int end, int x){

	int res=-1;

	while(start <= end){

		int mid=(start + end)/2;
		if(a[mid]==x){
			res=mid;
			start=mid+1;
		}
		else if(x > a[mid]) start=mid+1;
		else end=mid-1;
	}
	return res;
}

int main(){

	int a[]={2,2,3,3,3,3,4,4,4,4,5,6};
	int n=sizeof(a)/sizeof(int);

	int x=3;

	cout<<"Index: "<<lastOccurr(a,0,n-1,x);

	return 0;
}