/*

╭━━━┳━━━┳━━━━┳╮╱╭┳╮
┃╭━╮┃╭━╮┃╭╮╭╮┃┃╱┃┃┃
┃╰━╯┃┃╱┃┣╯┃┃╰┫┃╱┃┃┃
┃╭╮╭┫╰━╯┃╱┃┃╱┃┃╱┃┃┃╱╭╮
┃┃┃╰┫╭━╮┃╱┃┃╱┃╰━╯┃╰━╯┃
╰╯╰━┻╯╱╰╯╱╰╯╱╰━━━┻━━━╯

 INS : SBGC

 */


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include<stdlib.h>
#include<stdio.h>
#include<set>
#include <queue>
#include <utility>
#include <time.h>
#include <math.h>
//#include <bits/stdc++.h>

#define ll long long
#define u unsigned
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define pll pair<ll,ll>
#define pi pair<int,int>
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;
string s;
map<char,int> m;
void init() {
	for(u int i = 'a' ; i <= 'z'; i++) {
		m[i] = 0;
	}
}

bool isPal() {
	int odd = 0;
	for(int i = 'a' ; i <= 'z'; i++) {
		if(m[i]%2!=0) odd++;
		if(odd>1) return false;
	}
	return true;
}

void rem() {
	for(u int i = 'a' ; i <= 'z'; i++) {
		if(m[i]%2 != 0) {m[i]-- ; break;}
	}
}

void test() {
	for(auto c: m) {
		cout << c.first << " " << c.second << endl;
	}
}

int main() {
	init();
	cin >> s;
	for(unsigned int i = 0 ; i < s.size() ; i++ ) {
		m[s[i]]++;
	}
	//test();
	for(u int i = 0 ;  ; i++) {
		if(i%2==0) {
			if(isPal()) { puts("First");
				return 0;}
			rem();
			//cout << s << endl;
		}
		else {
			if(isPal()) { puts("Second");
				return 0;}
			rem();
			//cout << s << endl;
		}
		//test();
	}
}
