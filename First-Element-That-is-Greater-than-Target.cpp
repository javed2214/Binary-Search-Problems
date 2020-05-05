// First Element in a Sorted Array that is Greater than Target Value

#include<bits/stdc++.h>
using namespace std;

int binary_search(int *a, int n, int target){

	int start = 0, end = n - 1, res = -1;
	
	while(start <= end){

		int mid = start + (end - start) / 2;

		if(a[mid] >= target){
			res = a[mid];
			end = mid - 1;
		}
		if(a[mid] < target) start = mid + 1;
	}
	return res;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int n, target; cin >> n >> target;
	
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];

	cout << binary_search(a, n, target);

	return 0;
}