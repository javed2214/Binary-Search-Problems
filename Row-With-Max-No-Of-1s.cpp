// Row With Max Number of 1's
// https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/
// TC : O(nlogn)
// Using Binary Search

#include<bits/stdc++.h>
using namespace std;
#define N 5
#define M 5

int binarySearch(int *a, int flag){				// Count Occurrences Using Binary Search

	int start = 0;
	int end = M - 1;

	int res = -1;

	while(start <= end){

		int mid = (start + end) >> 1;
		
		if(a[mid] == 1){
			
			res = mid;
			
			if(!flag) end = mid - 1;
			else start = mid + 1;
		}
		
		else if(a[mid] < 1) start = mid + 1;
		
		else end = mid - 1;
	}

	return res;
}

int main(){

	int mat[N][M] = {
		
		{0,0,1,1,1},
		{0,0,0,0,0},
		{0,0,0,0,1},
		{1,1,1,1,1},
		{0,0,0,0,1}
	};

	int mx = 0;

	for(int i=0;i<N;i++){
		
		int s = binarySearch(mat[i], false);
		int e = binarySearch(mat[i], true);
		
		if(s != -1) mx = max(mx, e - s + 1);
	}

	cout << mx;

	return 0;
}