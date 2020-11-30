#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , k , l , c , d , p , nl ,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	l = k*l;
	d = c*d;

	l = (l/nl) / n;
	p = (p / np ) / n;
	d = d/n;

//	cout << l << " " << p << " " << d;

	vector<int>v;
	v.push_back(l);
	v.push_back(d);
	v.push_back(p);
	sort(v.begin(),v.end());
	cout << v[0];
	
}
