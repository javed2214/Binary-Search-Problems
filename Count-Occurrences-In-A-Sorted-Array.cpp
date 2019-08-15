// Program to Count Occurrences of Number in a Sorted Array
// https://www.youtube.com/watch?v=pLT_9jwaPLs&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=5
// Time Complexity: O(log(n))

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *a, int n, int x, bool flag){

	int  res = -1;

	int l = 0;
	int r = n - 1;

	while(l <= r){

		int mid = (l + r) / 2;

		if(a[mid] == x){

			res = mid;

			if(flag) r = mid - 1;
			else l = mid + 1;
		}
		else if(x < a[mid]) r = mid - 1;
		else l = mid + 1;
	}
	return res;
}

int main(){

	int a[]={1,1,2,2,2,2,3,3,4,4,5,6,6,6,6,6};
	int n = sizeof(a)/sizeof(int);

	int x;
	cout<<"Enter Element to Search: ";
	cin>>x;

	int firstIndex = binarySearch(a,n,x,true);
	
	if(firstIndex == -1){
		cout<<"Element not Found!";
		return 0;
	}
	int lastIndex = binarySearch(a,n,x,false);

	cout<<"No of Occurrences: "<<lastIndex - firstIndex + 1;

	return 0;
}