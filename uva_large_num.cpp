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
#define pll pair<ll,ll>
#define pi pair<int,int>
#define max 10000007
using namespace std;
vector<ll> primes;
vector<bool> seived;

void seive() {
	for(ll i = 0 ;  i <= max ;i++) seived.pb(1);
	seived[0] = seived[1] = 0;
	for(ll i = 2 ; i*i < max+1 ; i++) {
		if(seived[i]) {
			for(ll j = 2 ; i*j < max+1 ; j++) seived[i*j] = 0;
		}
	}
}
void primes_f() {
	ll s = seived.size();
	for(int i = 2 ; i < s ; i++) {
		if(seived[i]) primes.pb(i);
	}
}
void prime_fact(ll n) {
	for(ll i = 0 ; primes[i]*primes[i] <= n ; i++ ) {
		while(n%primes[i] == 0) {
			cout << "    " << primes[i] << "\n";
			n = n/primes[i];
		}
	
	}
	if(n > 1) cout <<"    " << n << "\n";
}

int main() {
	ll a;
	seive();
	primes_f();
	while(cin >> a and a!= -1) {
		prime_fact(a);
		cout << "\n";
	}
	
}
