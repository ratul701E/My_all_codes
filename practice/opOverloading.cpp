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

class OpOver {
	public:
	int a , b;
	
	OpOver () {
		//nothing 
	}
	void pushData(int  i , int j) {
		a = i , b = j;
	}
	void display() {
		printf("A : %i\nB : %i\n",a,b);
	}
	//OpOver operator *(OpOver &last);
	//OpOver operator /(OpOver &last);
};

/*
OpOver OpOver::operator *(OpOver &last) {
	// orginally op3 = op1.operator*(op2)
	OpOver temp;
	temp.a = a*last.a;
	temp.b = b*last.b;
	return temp;
}
*/

/*
OpOver OpOver::operator /(OpOver &last) {
	// orginally op3 = op1.operator/(op2)
	OpOver temp;
	temp.a = a/last.a;
	temp.b = b/last.b;
	return temp;
}
*/

OpOver operator + (const OpOver& f , const OpOver& s) {
	// 
	OpOver temp ;
	temp.a = f.a+s.a;
	temp.b = f.b+s.b;
	return temp;
}

int main() {
	OpOver a , b , c;
	a.pushData(10,20);
	b.pushData(20,40);
	c = a + b;
	c.display();
}

