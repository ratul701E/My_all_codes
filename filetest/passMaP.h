#include<vector> 
#include <string>
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
class Password {
	string password;
	int chare;
	int sym;
	int num;
	public:
	Password(int c , int s , int n) {
		chare = c; sym = s ; num = n;
	}
	
	void lenth(int s) { 
	string retStr;
	string l = "QWERTYUIOPASDFGHJKLMNBVCXZzxcvbnmlkjhgfdsapoiuytrewq";
	while(s--) {
		retStr += l[rand()%l.size()];
	}
	password += retStr;
}

void special(int s) {
	string retStr;
	string sc = "*@#%!?/$&";
	while(s--) {
		retStr += sc[rand()%sc.size()];
	}
	password += retStr;

}

void numb(int s) {

	string retStr;
	string n = "0123456789";
	while(s--) {
		retStr += n[rand()%n.size()] ;
	}
	password += retStr;
}

void mixer(string s) {
	string retStr;
	vector<char>let;
	int size = s.size();
	while(size--) {
	//	cout << s[size] << endl;
		let.push_back(s[size]);
	}
	/*for(int i = 0; i < let.size();i++){
		cout << let[i];
	}
	cout << endl;*/
	srand(time(0));
	while(let.size()) {
		int k = rand()%let.size();
		retStr += let[k];
		let.erase(let.begin()+k,let.begin()+k+1);
		cout << "2nd while" ;
		
            }
	//cout << retStr << endl;
	password = retStr;
}
void build() {
	lenth(chare);
	cout << "l ok\n";
	special(sym);
	cout << "s ok\n";
	numb(num);mixer(password);
	cout << "m ok\n";
}

string show() {
	return password;
	} 	
};
