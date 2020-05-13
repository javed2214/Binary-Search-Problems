// Unique Element in a Sorted Array
// Given a Sorted Array in which all the Elements are Occurring Twice Except one, Find that Unique Element

// First Method : Taking XOR of all the Elements - Time : O(n)
// Second : Binary Search - Time : O(log(n))

#include<bits/stdc++.h>
using namespace std;

int uniqueElement(int *a, int n){ 

    int start = 0, end = n - 1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(a[mid] != a[mid + 1] and a[mid] != a[mid - 1]) return a[mid];
        if(((mid % 2) == 0 and a[mid] == a[mid + 1]) or ((mid % 2) != 0) and a[mid] == a[mid - 1]) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main(){

    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    cout << uniqueElement(a, n);

    return 0;
}
