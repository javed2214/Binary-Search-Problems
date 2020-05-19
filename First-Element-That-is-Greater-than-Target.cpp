// First Element in a Sorted Array that is Greater than Target Value
// Time Complexity : O(Log(n))

#include<bits/stdc++.h>
using namespace std;

int binary_search(int *a, int n, int x){

    int start = 0, end = n - 1;
    int res = -1;

    while(start <= end){

        int mid = start + (end - start) / 2;
        if(a[mid] == x){
            res = mid;
            start = mid + 1;
        }
        else if(a[mid] < x) start = mid + 1;
        else end = mid - 1;
    }
    return res + 1 < n ? a[res + 1] : a[res];
}

int main(){

    int a[] = {1,1,2,3,3,3,4,5,6,8,8,9,10,10};
    int n = sizeof(a) / sizeof(int);

    int x;
    cin >> x;

    cout << binary_search(a, n, x);
    
    return 0;
}
