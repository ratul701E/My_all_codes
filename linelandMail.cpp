#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n;
	vector<ll>dis;
	cin >> n;
	while(n--) {
		int temp; cin >> temp;
		dis.push_back(temp);
	}

	ll r = dis[dis.size()-1];
	ll l = dis[0];

	for(ll i = 0 ; i < dis.size(); i++) {

		ll _min , _max;
		ll next , prev;
		if(i == 0) prev = dis[i+1];
		else prev = dis[i-1];
		if(i == dis.size()-1) next = prev;
		else next = dis[i+1]; 

		if(abs(dis[i] - prev) >= abs(dis[i] - next)) {
			_min = abs( dis[i] - next );
			}

		else _min = abs(dis[i] - prev );
		cout << _min << " ";

		if(abs(dis[i] - r) > abs(dis[i] - l)) _max = abs(dis[i] - r);
		else _max = abs(dis[i] - l );
		cout << _max << endl;
		
	} 
	
}
