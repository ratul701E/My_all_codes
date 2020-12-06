#include <bits/stdc++.h>
using namespace std;
#define maxCan 9

int box[maxCan][maxCan];

struct candidate {
	string name;
	int vote;
	bool elem ;
	candidate() {
		elem = false;
		vote = 0;
	}
};

int voteC(candidate a[] , int ran) {
	for(int i = 0 ; i < 
}

int main(int argc , char* argv[]) {
	if(argc == 1) {
		return 1;
	}
	int voters; cout << "Voters : "; cin >> voters;
	
	candidate can[argc-1];
	
	for(int i = 0 ; i < argc -1 ; i++) {
		can[i].name = argv[i+1];
	}
	
	for(int i = 0 ; i < voters ; i++) {
		for(int j = 0 ; j < argc-1 ;j++) {
			string s; cin >> s;
			bool b = 0;
			for(int k = 0 ; k < argc-1 ; k++) {
				if(can[k].name == s) {
					box[i][j] = k;
					b = true;
				}
			}
			if(!b) {
				cout<< "wrong vote\n";
				continue;
			}
		}
	}
	
	
}
