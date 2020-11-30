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
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <queue>
#include <utility>
#include <time.h>
#include <math.h>
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define pll pair<ll,ll>
#define pi pair<int,int>
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

bool which(string s) {
	string a;
	for(unsigned int i = 0 ; i < s.size() ; i++) {
		if(s[i] >= 'A') a+=s[i];
	}
	if(a[0] == 'R' and a[1] == 'C' and s.size() > 3) return 1;
	return 0;
	
}


string numToAlpha(long long s) {
	int base = 1;
	string res ;
	while(s>0) {
		res += (long long) (s%26) + 'A' - 1;
		base *= 26;
		s/=26;
		
	}
	reverse(res.begin(),res.end());
	return res;
}

long long alphaToLong(string s) {
	long long res = 0;
	int base = 1;
	for(int i = s.size()-1; i >= 0 ; i--) {
		res += (long long) (s[i] - 'A' +1)*base;
		base *= 26;
	}
	return res;
}

int main() {
	long long n; cin >> n;
	while(n--) {
		string ss;
		cin >> ss;
		long long row , col;
		string r , c;
		
		if(which(ss)) {
			unsigned int i;
			for(i = 1 ; ss[i] < 'A' ; i++ ) {
				r += ss[i];
			}
			for(++i ; i < ss.size() ; i++) {
				c+=ss[i];
			}
			row = stoll(r) ;
			col = stoll(c);
			
			c = numToAlpha(col);
			cout << c << row << endl;
		}
		else {
			unsigned int i;
			for( i = 0 ; ss[i] >= 'A' ; i++) {
				c += ss[i];
			}
			for( ; i < ss.size() ; i++) {
				r += ss[i];
			}
			row = stoll(r);
			//cout << "Ok till now\n";
			col = alphaToLong(c);
			printf("R%lldC%lld\n",row,col);
		}
	}
}
