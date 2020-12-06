#include<bits/stdc++.h>
using namespace std;
vector<string> Hash[20];
int _hash(string s) {
	int sum = 0;
	for(int i = 0 ; i < s.size() ; i++) {
		sum += s[i] * (s[i] - 'a') ; 
	}

	return sum%10;
}

void _insert(string s) {
	int x;
	x = _hash(s);
	Hash[x].push_back(s);
	
}

void _search(string s){
	int x = _hash(s);
	for(int i = 0 ; i < Hash[x].size();i++) {
		if(Hash[x][i] == s) {
			cout << "Found : " << s << "\nPosition : ["<< x << "]["<<i<<"]\n";
			return;
		}
	
	}
	cout << "Not found\n";

}
int main() {
	_insert("abc");
	_insert("acb");
	_insert("bca");
	
	_search("abc");
	_search("acb");
	_search("bca");
}
