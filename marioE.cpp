#include <bits/stdc++.h>
using namespace std;

int main() {
	int h;
	scanf("%i:",&h);
	int space = h-1;
	while(space >= 0) {
		for(int i = 0 ; i < space ; i++) cout << " ";
		for(int i = space ; i < h ; i++) cout << "#";
		cout << "  ";
		for(int i = space ; i < h ; i++) cout << "#";
		cout << endl;
		space--;
	}
}
