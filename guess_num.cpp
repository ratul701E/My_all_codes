#include<bits/stdc++.h>

using namespace std;

int main() {
	long l , r; l=1 ; r = 1000000;
	while(l!=r) {
		int mid = (l+r+1)/2;
		string c;
		cout << mid << endl;
		cin >> c;
		if(c == "<") r = mid-1;
		else l = mid; 
	}
	cout << "! " << l << endl;
}
