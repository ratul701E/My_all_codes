#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int t;
	cin >> t; cin.ignore();
	while(t--) {
		getline(cin,s);
		cout << s[0] << s[1];
	        for(int i = 3; i<s.size();i+=2){
		    cout << s[i];

	        }
	        cout << endl;
	}
}
