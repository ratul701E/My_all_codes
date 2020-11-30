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


int main() {
	//ios_base::sync_with_stdio(0) ; cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll a , b , k;
		cin >> a >> b >> k;
		ll pos  = 0;
		if(k%2 != 0) {
			pos += a*((k/2)+1);
			pos -= b*(k - ((k/2)+1));
		}
		else {
			pos += a*(k/2);
			pos -= b*(k/2);
		}
		cout << pos << endl;
	}
}
