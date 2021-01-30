// Count Negative Numbers in a Sorted Matrix
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    
    int go(vector <int> &v, int start, int end){
        
        int temp = -1;
        
        while(start <= end){
            
            int mid = start + (end - start) / 2;
            if(v[mid] >= 0){
                temp = mid;
                start = mid + 1;
            }
            else end = mid - 1;
        }
        return temp + 1;
    }
    
    int countNegatives(vector<vector<int>>& grid) {
     
        int cnt = 0, n = grid[0].size();
    
        for(auto it: grid)
            cnt += n - go(it, 0, n - 1);
        
        return cnt;
    }
};