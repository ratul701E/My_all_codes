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
#define db(x) cout << #x << " : " << x << endl;
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;


int main() {
	int k , r;
	int quan = 0;
	cin >> k >> r;
	if(k % 10 == 0 or (k-r) % 10 == 0) {puts("1");return 0;}
	int price = k*2;
	quan++;
	while(true) {
		if(price%10 == 0 or (price -r) % 10 == 0) {
			quan++; 
			break;
		}
		else {
			price += k;
			quan++;
		}
		//cout << "price : " << price << " Quan : " << quan << endl;
	}
	printf("%d\n",quan);
}
