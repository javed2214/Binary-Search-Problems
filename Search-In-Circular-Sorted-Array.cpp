// Program to Search Element in Circular Sorted Array
// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

class Solution {
public:
    
    int go(vector <int> &A, int k){
        
        int start = 0, end = A.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(A[mid] == k) return mid;
            if(A[mid] > A[end]){
                if(k >= A[start] and k < A[mid]) end = mid - 1;
                else start = mid + 1;
            }
            else{
                if(k > A[mid] and k <= A[end]) start = mid + 1;
                else end = mid - 1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        return go(nums, target);
    }
};
