#include<bits/stdc++.h>
#define ll long long 
using namespace std;



int main() {
	ll n;
	ll filled = 0;
	int k;
	cin >> n;
	bool arr[n][n] ={false};
	cin >> k;
	while(k--){
		int i , j;
		
		cin >> i >> j;
		i--;j--;
		for(int x = 0 ; x < n ; x++){
			if(!arr[i][x]) {
				arr[i][x] = true;
				filled++;
			}
		}

		for(int x = 0; x < n; x++) {
			if(!arr[x][j]) {
				arr[x][j] = true;
				filled++;
			}
		}
		//cout << filled << endl;

		cout << (n*n)-filled << " ";
		
	}

}
