#include<iostream>
#include <map>
#include <algorithm>
#include<stdlib.h>
#include<stdio.h>
#include<set>
#include <queue>
//#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
using namespace std;
 
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b;
		cin >> a >> b;
		int count = 0;
		while(1) {
			if(a%b == 0) {
				break;
			}
			ll tmp = a;
			a = ((a/b)+1) * b;
			count += (a-tmp);
		}
		cout << count << endl;
	}
}
