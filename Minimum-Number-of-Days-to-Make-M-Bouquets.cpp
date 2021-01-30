// Minimum Number of Days to Make m Bouquets
// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution {
public:
    
    bool go(vector <int> &A, int m, int k, int mid){
        
        int x = 0, p = 0;
        for(int i = 0; i < A.size(); i++){
            if(A[i] <= mid){
                x++;
                if(x == k){
                    x = 0;
                    p += 1;
                }
            }
            else x = 0;
        }
        return p >= m;
    }
    
    int minDays(vector<int>& A, int m, int k) {
        
        if(A.size() < m * k) return -1;

        int start = INT_MAX, end = INT_MIN;
        
        for(auto it: A){
            start = min(start, it);
            end = max(end, it);
        }
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(go(A, m, k, mid)) end = mid - 1;
            else start = mid + 1;
        }
        return start;
    }
};