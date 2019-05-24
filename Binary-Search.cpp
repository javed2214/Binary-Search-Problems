// Binary Search Algorithm

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *a, int s, int e, int x){
	
	if(e>=s){
		
		int mid=(s+e)/2;
		
		if(a[mid]==x)
			return mid;
		if(x>a[mid])
			return binarySearch(a,mid+1,e,x);
		else
			return binarySearch(a,s,mid-1,x);
	}

	return -1;
}

/*
*********** ITERATIVE BINARY SEARCH ***********

int binarySearch(int *a, int start, int end, int x){

	while(start <= end){
		int mid=(start + end)/2;
		if(x==a[mid]) return mid;
		if(x>a[mid]) start=mid+1;
		if(x<a[mid]) end=mid-1;
	}
	return -1;
}
*/


int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(int);
	int x=1;
	int p=binarySearch(a,0,n-1,x);
	cout<<"Index: "<<p;

	return 0;
}
