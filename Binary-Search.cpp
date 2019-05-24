// Binary Search Algorithm

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *a, int start, int end, int x){

	if(start <= end){

		int mid=(start+end)/2;
		if(a[mid]==x) return mid;
		if(x<a[mid]) return binarySearch(a,start,mid-1,x);
		if(x>a[mid]) return binarySearch(a,mid+1,end,x);
	}
	return -1;
}

int main(){

	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(int);

	int x=10;

	int p=binarySearch(a,0,n-1,x);
	
	if(p!=-1) cout<<"Number Found at Index "<<p<<"\n";
	else cout<<"Number Not Found!\n";

	// Inbuilt Binary Search Function
	if(binary_search(a,a+n,x)) cout<<"Found!";

	return 0;
}