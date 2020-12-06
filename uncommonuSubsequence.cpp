#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string a , b;
	cin >> a;
	cin >>b;

	ll max = 0 , temp = 0;
	ll range;

	if(a.size() > b.size()) {
		cout << a.size() ;
		return 0;
	}
	else if (a.size() < b.size() ) {
		cout << b.size();
		return 0;
	}

	(a.size() > b.size() ) ? range = b.size() : range = a.size();
	
	for(ll i = 0 ; i < range ; i++) {
		if(a[i] ==  b[i]) {
			max = temp;
			temp = 0;
		}
		else if(a[i] != b[i]) {max = a.size() ; break;}

		else temp++;
	}
	if(temp > max) max = temp;

	if(max == 0) cout << -1;
	else cout << max;
}
