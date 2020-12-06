#include<iostream>
using namespace std;
int main() {
	long long money;
	long int count = 0;
	cin >> money;
	while(money) {
		if(money >= 100) money -= 100;
		else if(money >=20) money -= 20;
		else if(money >= 10) money -= 10;
		else if(money >= 5) money -= 5;
		else if(money >= 1) money -= 1;
		count++;
	}
	cout << count;
}
