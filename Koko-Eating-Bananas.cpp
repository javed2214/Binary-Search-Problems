// Koko Eating Bananas
// https://leetcode.com/problems/koko-eating-bananas/
// https://www.youtube.com/watch?v=Sp2sRLcLND0&feature=emb_title

class Solution {
public:
    
    bool go(vector <int> &piles, int k, int h){
        
        int sum = 0;
        for(auto it: piles){
            if(it <= k) sum += 1;
            else sum += it / k + 1;
        }
        return sum <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int H) {
        
        int start = 1, end = *max_element(piles.begin(), piles.end());
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(go(piles, mid, H)) end = mid - 1;
            else start = mid + 1;
        }
        return start;
    }
};