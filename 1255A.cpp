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
	int t;
	cin >> t;
	while(t--) {
		ll a , b;
		cin >> a >> b;
		ll c = 0;
		ll gap = abs(a-b);
		if(gap >= 5) {
		c += gap/5;
		if(gap%2 == 0) gap = 0;
		else gap /= 5;
		}
		if(gap >= 2) {
		c+= gap/2;
		if(gap%2==0) gap = 0;
		else gap/=2;
		}

		c+= gap;
		cout << c << "\n";
	}
}
