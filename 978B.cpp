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
	int n ;
	string s;
	cin >> n >> s;
	int count = 0;
	int tmp = 0;
	for(int i = 0 ; i < n ; i++ ) {
		if(s[i] != 'x') {
			if(tmp >= 3) count += tmp-2;
			tmp = 0;
		}	
		else tmp++;
	}
	if(tmp >= 3) count += tmp-2;
	cout << count;
}
