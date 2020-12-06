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
	while(t--) {
		int n;
		map<int,int>p;
		cin >> n;
		for(int i = 0 ; i < n ; i++) {
			int tmp ; cin >> tmp;
			if(p.count(tmp) > 0 and !p.empty()) p[tmp] += 1;
			else p.insert({tmp,1});
		}
		/*for(auto ii : p) {
			cout << ii.ff << " " << ii.ss << endl;
		}*/
		int maxx = 0;
		for(int i = 2 ; i <= 100 ; i++) {
			int maxi = 0;
				for(auto val : p) {
					if(val.ff >= i) continue;
					int search = i - val.ff;
					//cout << "search : " << search << endl;
					if(p.count(search) >0) {
						maxi += min(val.ss,p[search]);
					}
				}
				//cout << "Maxi : " << maxi << endl;
				maxi /= 2;
				//cout << "Maxi : " << maxi << endl;
				if(maxi > maxx) maxx = maxi;
		}
		cout << maxx << endl;
	}
}
