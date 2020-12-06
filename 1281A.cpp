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
	int t ; 
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n = s.size();
		if(s[n-1] == 'o') cout << "FILIPINO\n";
		else if(s[n-1] == 'a') cout << "KOREAN\n";
		else cout << "JAPANESE\n";
	}
}
