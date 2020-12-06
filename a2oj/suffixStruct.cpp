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
#include <set>
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
#define db(x) cout << #x << " : " << x << endl;
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

string s , g;
map<char,int> s1 , g1;

bool autom() {
	int pos = 0;
	for(u int i = 0 ; i < g.size() ; i++) {
		bool b = 0;
		for(u int j = pos ; j < s.size() ; j++) {
			if(s[j] == g[i]) {pos = j;b=1;}
		}
		if(!b) return 0;
	}
	return 1;
}

int main() {
	
	
	cin >> s >> g;
	
	if(autom()) puts("automaton");
	//else puts("automaton failed");
	
	for(u int i = 0 ; i < s.size() ; i++) s1[s[i]]++;
	for(u int i = 0 ; i < g.size() ; i++) g1[g[i]]++;
	
	for(auto a : g1) {
		if(s1[a.ff] <= 0) {
			puts("need tree");
			return 0;
		}
	}
	
	bool b = true;
	for(u int i = 0 ; i < g.size() ; i++) {
		if(s1[g[i]] <= 0) {b = false ; break;}
	}
	if(b and g.size() == s.size()) puts("array");
	else if(b) puts("both");
	else puts("automaton");
}
