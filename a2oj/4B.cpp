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
#define u unsigned 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define pll pair<ll,ll>
#define pi pair<int,int>
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;
void print(vector<int> v ) {
	for(u int i = 0 ; i < v.size() ; i++) cout << v[i] << " " ;
	puts("");
}

int main() {
	vector<pair<int,int> > times;
	vector<int> res;
	int days , sum , highest = 0 , lowest = 0;
	cin >> days >> sum;
	for(int i = 0 ; i < days ; i++ ) {
		int t1 , t2;
		cin >> t1 >> t2;
		times.pb({t1,t2});
		highest += t2;
		lowest += t1;
	}
	if(sum > highest or sum < lowest) {puts("NO"); return 0; }
	for(u int i = 0 ; i < times.size() ; i++) {
		res.pb(times[i].ff);
		sum -= times[i].ff;
	}
	//print(res);
	//cout << "SUM " << sum << endl;
	for( u int j = 0; sum > 0 and res.size() > j ;j++) {
		int add = abs(times[j].ss - times[j].ff) ;
		if(sum >= add) {
			res[j] += add;
			sum -= add;
		}
		else { res[j] += sum ; break;}
	}
	puts("YES");
	print(res);
}
