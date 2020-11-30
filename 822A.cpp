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
#define pb push_back
#define ff first
#define ss second
#define un unsigned 
#define mp make_pair
#define pll pair<ll,ll>
#define pi pair<int,int>
using namespace std;

un ll fact(un ll a) {
	if (a == 1 or a == 0) return 1;
	else return (un ll) a * fact(a-1); 
}

un ll gcd ( un ll a , un ll b) {
	if(b == 0) return a;
	return gcd(b , a%b);
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	un ll a , b;
	cin >> a >> b;
	//cout << (un ll) gcd(fact(a) , fact(b) );*/
	cout << fact(min(a,b));
}
