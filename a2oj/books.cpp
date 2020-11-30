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
#define ull unsigned long long 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define pll pair<ll,ll>
#define pi pair<int,int>
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);
#define db(x) cout << #x << " : " << x << endl;

using namespace std;


int main() {
	ll n; ll t;
	ll read = 0;
	ll sum = 0;
	cin >> n >> t;
	vector<ll>times;
	//vector<int>times_c;
	for(ll i = 0 ; i < n ; i++) {
		ll tmp; cin >> tmp;
		times.push_back(tmp);
		//db("1st l");
	}
	//times_c = times;
	//int small = *min_element(times.begin() , times.end());
	
	//int start = find(times.begin() , times.end() , small) - times.begin();
	//sort(times_c.begin() , times_c.end() );
	
	//for(int j = 0 ; j < start ; j++) times.pb(times[j]);
	/*
	for(int i = 0 ; i < n; i++) {
		sum = 0;
		int readT = 0;
		for(int j = i ; j < n ; j++) {
			if(sum+times[j] > t) break;
			else {sum+=times[j];readT++;}
		}
		//db("2st l");
		if(readT > read) read = readT;
	}*/
	ll p = 0;
	for( ll i = 0 ; i < n ; i++) {
		if(sum + times[i] > t) {
			for(ll j = p ; j < i ; j++) if(sum - times[j] <= t) {sum-=times[j] ; p = j+1; break;}
			else sum-=times[j];
			read-- ;
		}
		sum += times[i]; read++;
	}
	
	printf("%lld\n",read);
	
}
