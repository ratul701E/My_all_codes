#include <bits/stdc++.h>
using namespace std;

int main(int argc , char* argv[]) {
	if(argc != 2) {
		printf("usage ./caesar key");
		return 1;
	}
	int len = strlen(argv[1]);
	for(unsigned int i = 0 ; i < len  ; i++) {
		if(isalpha(argv[1][i])) {
			printf("usage ./caesar key");
			return 1;
		}
	}
	int key = atoi(argv[1]);
	string ptext , ctext;
	cout << "Enter plaintext : ";
	getline(cin , ptext);
	for(int i = 0 ; i < ptext.size() ; i++) {
		char ch = ptext[i];
		if(!isalpha(ch)) {ctext += ch ; continue;}
		if(islower(ch)) {
			char c = ch - 'a';
			ctext += ((c + key) % 26) + 'a';
		}
		else if(isupper(ch)){
			char c = ch - 'A';
			ctext += ((c + key) % 26) + 'A';
		}
	}
	printf("Ciphertext : %s\n",ctext.c_str());
}
