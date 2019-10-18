// Sorted Insert Position - InterviewBit
// https://www.interviewbit.com/problems/sorted-insert-position/

// Given a sorted array and a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.
// You may assume no duplicates in the array.


int binarySearch(vector <int> &a, int x){

	int start = 0;
	int end = a.size() - 1;

	while(start <= end){

		int mid = (start + end) >> 2;
		if(a[mid] == x) return mid;
		else if(a[mid] > x) end = mid - 1;
		else start = mid + 1;
	}

	return start;
}


int Solution::searchInsert(vector<int> &A, int B){

	return binarySearch(A,B);
}