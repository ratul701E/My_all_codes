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
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define un unsigned
#define pll pair<ll,ll>
#define pi pair<int,int>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--) {
		int arr[26] = {0};
		string s;
		int n;
		cin >> n;
		int nn = n;
		while(n--) {
			string tmp; cin >> tmp;
			s+=tmp;
		}
		for(un int i = 0 ; i < s.size() ; i++ ) {
			arr[(int)s[i]-'a']++;
		}
		bool flag = 1;
		for(int i = 0 ;  i < 26 ; i++) {
			if(arr[i] == 0) continue;
			if(arr[i] % nn != 0) { flag = 0 ; break;}
		}
		//for(int i = 0 ; i < 26 ; i++) cout << arr[i] << " ";
		if(flag) cout << "YES\n";
		else cout << "NO\n";
		
		
	}
}
