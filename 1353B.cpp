#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, s , k;
	cin >> t;
	while(t--) {
		vector<int>a;
		vector<int>b;
		cin >> s >> k;
		for(int i = 0; i < s; i++) {
			int j ; cin >> j; a.push_back(j);
		}
		while(s--) {
			int j ; cin >> j; b.push_back(j);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		int j = a.size() -1;
		int i = 0;
		while(k) {
				
				if(b[j] >  a[i]) {
				a[i] = b[j];
				j--;
				k--;
			}
				i++;

		}

		int sum = 0;
		for(int i = 0 ; i < a.size() ; i++) sum += a[i];
		cout << sum << endl;

	}
}
