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
#include <string>
#include <utility>
#include <time.h>
#include <math.h>
//#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define pll pair<ll,ll>
#define pi pair<int,int>
#define db(x) cout << #x << " : " << x << endl;
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

string s;

int main() {
	cin >> s;
	int t = s.size();
	map<int,int>v;
	for(int i = 0 ; i < t-1;i++) {
		int cnt = 0;
		for(int j = i ; j < t-1 ; j++) {
			if(s[j]==s[j+1]) cnt++;
		}
		v.insert({i+1,cnt});
	}
	int n;cin>>n;
	while(n--) {
		int l , r ,cnt=0;
		cin >> l >> r;
		cnt = abs(v[l]-v[r]);
		printf("%d\n",cnt);
	}
	
	
}
