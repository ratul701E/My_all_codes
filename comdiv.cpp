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
using namespace std;

ll gcd(ll a , ll b) {
	if(b==0) return a;
	return gcd(b , a%b);
}

int comdiv(ll a) {
	int cnt = 0;
	for(ll i = 1 ; i*i <= a; i++) {
		if(i*i == a) cnt++;
		else if(a%i==0) cnt += 2;
	}
	return cnt;
}
	
int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--) {
		ll a , b;
		cin >> a >> b;
		ll g = gcd(a,b);
		cout << comdiv(g) << "\n";
	}
}
