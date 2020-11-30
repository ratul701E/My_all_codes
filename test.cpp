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
	for(ull i = 0 ; i < s.size() ; i++) {
		if(s[i] >= 'A') a+=s[i];
	}
	if(a[0] == 'R' and a[1] == 'C' and s.size() > 3) return 1;
	return 0;
	
}

string AtoL(long s) {
	int base = 1;
	string res ;
	while(s>0) {
		res += (s%26) + 'A' - 1;
		base *= 26;
		s/=26;
		
	}
	reverse(res.begin(),res.end());
	return res;
}


const int maxx = 40;
int a[maxx][maxx];
vector<vector<int> > vec(maxx , vector<int> (maxx , 9));

struct n_ode {
	int val = 10;
};

map<int, n_ode> mm;

//___--___

void pf() {
	
	for(ull i =  0; i < maxx ; i++) {
		for(ull j =  0; j < maxx ; j++) {
			printf("%d ",a[i][j]);
		}
		puts("")	;
	}
}

void pff() {
	
	for(ull i =  0; i < maxx ; i++) {
		for(ull j =  0; j < maxx ; j++) {
			printf("%d ",vec[i][j]);
		}
		puts("")	;
	}
}

int main() {
	//memset(a,0,sizeof a);
	//memset(vec, -1, sizeof vec) ;
	//cout << sizeof(a);
	//pf();
	//pff();f
	
	string s  = "Hel";
	cout << s.substr(0,0);
}
