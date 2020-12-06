#include <bits/stdc++.h>
using namespace std;

int main(int argc , char* argv[]) {
	if(argc != 2) {
		printf("usage ./caesar CIPHERMAP");
		return 1;
	}
	int len = strlen(argv[1]);
	if(len != 26) {
		cout << "Must be 26 latters";
		return 1;
	}
	string ptext , ctext;
	cout << "plaintext : ";
	getline(cin , ptext) ;
	for(int i = 0 ; i < len ; i++) {
		char ch = ptext[i];
		if(!isalpha(ch)) {
			ctext += ch;
		}
		else if(isupper(ch)) {
			ctext += argv[1][ch - 'A'];
		}
		else if(islower(ch)) {
			ch = toupper(ch);
			ctext += tolower(argv[1][ch - 'A']);
			
		}
	}
	printf("Ciphertext : %s\n",ctext.c_str());
}
