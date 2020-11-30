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
	int n;
	ll range , a , b , d ;
	cin >> t;
	while(t--) {
		cin >> n;
		range = (long long)pow(10,n)-1;
		cin >> a;
		a = (long long) a;
		cout << (range*2)+a+2<< endl;
		cin >> b;
		b =(long long) b;
		if(b == range) cout << 1 << endl;
		else cout << range-b+1<< endl;
		cin >> d;
		d = (long long) d;
		if(d == range) cout << 1 << endl;
		else cout << range-d+1 << endl;
		int ss;
		cin >> ss;
		if(ss == -1) break;
		fflush(stdin);
	}
}
