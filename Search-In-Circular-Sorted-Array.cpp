// Program to Search Element in Circular Sorted Array

#include<bits/stdc++.h>
using namespace std;

int searchElement(int *a, int start, int end, int x){

	while(start <= end){

		int mid=(start + end)/2;
		if(a[mid]==x) return mid;
		if(a[mid] <= a[end]){
			if(x > a[mid] and x <= a[end]) start = mid + 1;
			else end = mid - 1;
		}
		else{
			if(x >= a[start] and x < a[mid]) end = mid - 1;
			else start = mid + 1;
		}
	}
	return -1;
}

int main(){

	int a[]={5,6,7,1,2,3,4};
	int n=sizeof(a)/sizeof(int);

	cout<<"Index: "<<searchElement(a,0,n-1,1);

	return 0;
}