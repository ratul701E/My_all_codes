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

vector<int> primes;
vector<bool> seived;

void seive() {
	for(int i = 0 ; i < 100001; i++) seived.pb(1);
	seived[0] = seived[1] = 0; seived[2] = 1;
	for(int i = 3 ; i <= 100001 ; i++) {
		if(seived[i]) {
			for(int j = 2 ; j*i <= 100001 ;j++){
				seived[j*i] = 0;
			}
		}
	}
}
void prime() {
	for(int i = 1 ; i < 100001 ; i++) {
		if(i%2 == 0) continue;
		else if(seived[i]) primes.pb(i);
	}
}

void test_case() {
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ;i++) {
		for(int j = 0 ; j < n ; j++) {
			
			if((j == 0 or j==n-1) and (i == 0 or i == n-1)) cout << 1 << " ";
			else cout << 0 << " ";
		}
		cout << endl;
	}
}

int main() {
	//seive();prime();
	int t; cin >> t;
	while(t--) {
		test_case();
	}
}
