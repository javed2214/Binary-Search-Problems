// Given a Circularly Sorted Array, Find Number of times the Array is Rotated

#include<bits/stdc++.h>
using namespace std;

int noOfRotations(int *a, int start, int end, int n){

	while(start <= end){
		
		if(a[start] <= a[end]) return start;
		int mid=(start + end)/2;
		int next,prev;
		next=(mid+1)%n;
		prev=(mid+n-1)%n;
		if(a[mid]<=next and a[mid]<=prev) return mid;
		else if(a[mid]<=a[end]) end=mid-1;
		else if(a[mid]>=a[start]) start=mid+1;
	}

	return -1;
}

int main(){

	int a[]={5,6,7,1,2,3,4};
	int n=sizeof(a)/sizeof(int);

	cout<<noOfRotations(a,0,n-1,n);

	return 0;
}