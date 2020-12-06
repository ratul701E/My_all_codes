#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int>x;
	for(int i = 0 ; i < 3 ; i++) {
		int k;
		cin >>k;
		x.push_back(k);
	}
	sort(x.begin(),x.end());
	cout << x[2] - x[0];
}
