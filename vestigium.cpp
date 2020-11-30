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
#include <stdlib.h>
#include <stdio.h>
#include <set>
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

vector<vector<int> > mat(100);
void repeatCheck(int &r , int &c , int n) {
	bool bb = 1;
	for(int i = 0 ; i < n ; i++) {
		bb = 1;
		for(int j = 0 ; j < n and bb ; j++) {
			int chq = mat[i][j];
			for(int k = j+1; k < n ; k++) {
				if(chq == mat[i][k] ) {
					r++;
					bb= 0;
					break;
				}
			}
		}
	}
	for(int i = 0 ; i < n ; i++) {
		bb =1;
		for(int j = 0 ; j < n and bb; j++) {
			int chq = mat[j][i];
			for(int k = j+1 ; k < n; k++) {
				if(chq == mat[k][i]) {
					c++;
					bb =0;
					break;
				}
			}
		}
	}
}


int main() {
	int t; cin >> t;
	for(int tt = 0 ; tt < t ; tt++) {
		int n;
		cin >> n;
		for(int i = 0 ; i < n ; i++) {
			mat[i] = vector<int>(n);
			for(int j = 0 ; j < n ; j++) {
				int tmp; cin >> tmp;
				mat[i][j] = tmp;
			}
		}
		int trace = 0 ; 
		for(int i = 0 ; i < n ; i++) trace += mat[i][i];
		int r , c;
		r= c= 0;
		repeatCheck(r,c,n);
		
		printf("Case #%d: %d %d %d\n",tt+1,trace,r,c);
		
		
	}
}
