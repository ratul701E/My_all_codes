#include <bits/stdc++.h>
using namespace std;

int main() {
	long cardNum;
	
	do {
		
	}while(scanf("%ld",&cardNum) != 1);
	
	vector<int> digits;
	
	while(cardNum > 0) {
		digits.push_back(cardNum % 10);
		cardNum /= 10;
	}
	vector <int > checksumD;
	
	for(int i = 1 ; i < digits.size() ; i+=2) {
		checksumD.push_back(digits[i] *2);
	}
	int checksum = 0;
	for(int i = 0 ; i < checksumD.size() ; i++) {
		while(checksumD[i] > 0) {
			checksum += checksumD[i] % 10;
			checksumD[i] /= 10;
		}
	}
	for(int i = 0 ; i < digits.size() ; i+=2) {
		checksum += digits[i];
	}
	
	if(checksum % 10 == 0) {
		int f = digits[0] , s= digits[1];
		int n = digits.size();
		if( (f == 3 and (s == 4 or s==3)) and n ==15) cout << "AMEX\n";
		else if( (f == 5 and (s== 1 or s==2 or s==3 or s==4 or s==5)) and n == 16 ) cout << "MASTERCARD\n";
		else if(f==4 and (n == 13 or n==16)) cout << "VISA\n";
	}
	else cout << "INVALID\n";
}
