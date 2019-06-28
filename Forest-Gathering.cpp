// Forest Gathering (CodeChef)
// https://www.codechef.com/problems/FORESTGA

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

bool checkCodition(ll mon, pair<ull,ull> h[], ull w, ull l, ull n){

	ll gain,sum=0;

	for(int i=0;i<n;i++){

		gain=h[i].first+h[i].second*mon;
		if(gain >= l) sum+=gain;
		if(sum >= w) return true;
	}
	if(sum >= w) return true;
	return false;
}


int main(){

	ull n,w,l;
	cin>>n>>w>>l;

	pair<ull,ull> h[n];

	for(int i=0;i<n;i++)
		cin>>h[i].first>>h[i].second;

	ll lo=0,ro=1e18;

	while(lo <= ro){

		ll mid=(lo+ro)/2;

		if(checkCodition(mid,h,w,l,n)) ro=mid-1;
		else lo=mid+1;
	}

	cout<<lo<<"\n";	

	return 0;
}