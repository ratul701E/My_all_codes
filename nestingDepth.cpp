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
#define ull unsigned long long 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define pll pair<ll,ll>
#define pi pair<int,int>
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;


int main() {
	int t;
	cin >> t;
	for(int tt = 0 ; tt < t ; tt++) {
		string str;
		string res;
		long cnt = 0;
		cin >> str;
		for(u int i = 0 ; i < str.size() ; i++) {
			int v = str[i] - '0';
			if(v>cnt) {
				for(u int j = 0 ; j < v-cnt ; j++) {
					res+='(';
				}
				
				cnt += v-cnt;
				res+= str[i];
			}
			else if(v<cnt) {
				for(int close = 0 ; close < abs(cnt-v) ; close++) {
					res+=')';
				}

				cnt -= abs(v-cnt);
				res+= str[i];
			}
			else res+= str[i];
		}
		for(int close2 = 0 ; close2 < cnt ;close2++) res+=')';
		printf("Case #%d: ",tt+1);
		cout<< res << endl;
	}
}
