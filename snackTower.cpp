#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	vector <ll> snack;
	vector <ll> sorted;

	ll n ; cin >> n;
	while(n--) {
		int k ; cin >> k;
		snack.push_back(k);
		sorted.push_back(k);
	}

	sort(sorted.begin(),sorted.end());


}
