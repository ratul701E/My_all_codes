#include <bits/stdc++.h>
using namespace std;

int main() {
	float cent ;
	do {
	} while(scanf("%f",&cent) != 1);
	
	int cash = round(cent * 100);
	//cout << cash << endl;
	
	int change  = 0;
	if(cash >= 25) {
		change += cash / 25;
		cash = cash % 25;
	}
	if(cash >= 10) {
		change += cash / 10;
		cash = cash % 10;
	}
	if(cash >= 5) {
		change += cash / 5;
		cash = cash % 5;
	}
	if(cash >= 1) {
		change += cash / 1;
		cash = cash % 1;
	}
	cout << change;
}
