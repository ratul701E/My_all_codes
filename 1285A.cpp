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
//#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
using namespace std;
 
 
int main() {
	ll n;
	string s;
	cin >> n >> s;
	int cnt_L = 0;
	for(ll i = 0 ; i < n ; i++) {
		if(s[i] == 'L') cnt_L++;
	}
	
	cout << abs(-cnt_L - (n-cnt_L))+1;
}
