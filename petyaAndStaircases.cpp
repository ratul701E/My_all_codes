#include<bits/stdc++.h>
#define ll long long
#define v vector
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	
	unsigned ll n , m;
	v<int>stairs;
	cin >> n >> m;
	if(m<= 0) {
	       cout << "YES\n";
       	       return 0;
	}
	while(m--) {
		ll k; cin >> k;
		stairs.push_back(k);
	}
	
	sort(stairs.begin(),stairs.end());

	if(stairs[0] == 1 or stairs[stairs.size()-1] == n) {
		//code 
		cout << "NO\n";
		return 0;
	}

	for(ll i = 1 ; i < stairs.size()-1;i++) {
		ll temp  = stairs[i];
		if(temp-1 == stairs[i-1] and temp+1 == stairs[i+1] ) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
}
