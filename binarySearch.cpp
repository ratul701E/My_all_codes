#include<bits/stdc++.h>
using namespace std;
int binaryFO(int a[] , int l , int h , int t) {
	int mid;
	while(h-l>1) {
		mid = l + (h-l)/2;
		if(a[mid] >= t) h = mid;
		else l = mid;

	}
	return h;
}

int main() {
	vector<int> v;
	for(int i = 0 ; i < 10 ; i++) v.push_back(i+1);
	v.push_back(2);
	sort(v.begin(),v.end());
	cout << binary_search(v.begin(),v.end(),2) << endl;
	vector<int>::iterator it;
	it = lower_bound(v.begin(),v.end(),2);
	cout << it-v.begin() << endl;
	it = upper_bound(v.begin(),v.end(),2);
	cout << it-v.begin() << endl;

	pair <vector<int>::iterator , vector<int>::iterator > p;
	p = equal_range(v.begin(),v.end(),2);
	cout << p.first-v.begin() << endl;
	cout << p.second - v.begin() << endl;
}
