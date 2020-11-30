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


int main() {
	int n;
	cin >> n;
	int loop = n*2 + 1;
	int target = 0;
	//loop = n+1;
	bool b = false;
	while(loop > 0) {
		int print_s = n*2 ;
		//(n < nn) cout << " ";
		while(print_s--) printf(" ");
		for(int i = 0 ; i <= target ; i++){
			 printf("%d",i);
			 if(target != 0) printf(" ");
		 }
		for(int i = target-1; i>= 0 ; i--) {
			printf("%d",i);
			if(i != 0) printf(" ");
		}
		puts("");
		if(n == 0) b = true;
		loop--;
		if(!b) {
		    target++;
		    print_s-=2;
		    n--;
		}
		else {
		    target--;
		    print_s+=2;
		    n++;
		}
	}
}
