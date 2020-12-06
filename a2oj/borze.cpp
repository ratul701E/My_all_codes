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
#include <string>
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


int main() {
	string code , ans;
	cin >> code;
	int n = code.size();
	for(int i = 0 ; i < n ; i++ ) {
		if(i < n ) {
			if(code[i] == '.')  {ans+= '0';continue;}
			
		}
		if(i < n-1) {
			string subb ; subb += code[i];  subb += code[i+1];
			//cout << subb << endl;
			if( subb == "-." ) {ans += '1';i++;}
			else if(subb == "--") {ans += '2';i++;}
		}
	}
	cout << ans;
}
