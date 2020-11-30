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
#define db(x) cout << #x << " : " << x << endl;
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);
const ll nax = 10000001;
using namespace std;

vector<bool>s;
vector<ll>primes;
void seive() {
	for(ll i = 0 ; i < nax ;i++) s.pb(1);
	for(ll i = 3 ; i*i <= nax ;i++){
		if(s[i]) {
			for(ll j = 2 ; j*i <= nax ;j++) s[i*j] = 0;
		}
	}
}
void prime() {
	primes.pb(2);
	for(ll i = 3 ; i < nax ; i+=2) {
		if(i%2 == 0) continue;
		if(s[i]) primes.pb(i);
	}
}

int main() {
	seive();
	prime();
	ll n ; cin >> n;
	for(int i = 0 ; i < n ;i++) {
		printf("%lld ",primes[i]);
		
	}
}
