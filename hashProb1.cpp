#include<bits/stdc++.h>
#define ll long long
#define max 100001
using namespace std;
vector<string>hashmap[max];

ll _hash(ll r) {
	ll x;
	x = r%max;
	return x;

}

void _insert(ll r , string n) {
	ll x = _hash(r);
	hashmap[x].push_back(n);
}

string _search(ll r) {
	ll x = _hash(r);
	return hashmap[x][0];
}

int main() {
	ll n;
	c

in >> n;
	while(n--) {
		ll roll;
		string name;
		cin >> roll; cin.ignore();
		getline(cin,name);
		_insert(roll,name);
	}
	cin >> n;
	while(n--) {
		ll r; cin >> r;
		cout << _search(r) << endl;
	}


}


