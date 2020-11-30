#include<bits/stdc++.h>
using namespace std;
#define dbug(x) cout << x << endl;

vector<int>a;
void getIntoVec() {
	ifstream f("input.txt");
	int read;
	while(f >> read ) a.push_back(read);
}

void merge(long long l , long long m, long long h) {
	long long n1 = m-l +1;
	long long n2 = h - m;
	long long lArr[n1+1] , rArr[n2+1];
	
	//dbug("zero");
	
	for(long long i = 0 ; i < n1 ; i++) lArr[i] = a[l+i];
	for(long long i = 0; i < n2 ; i++ ) rArr[i] = a[m+1+i];
	
	//dbug("first")
	
	lArr[n1] = LONG_LONG_MAX;
	rArr[n2] = LONG_LONG_MAX;
	
	int temp[n1+n2];
	
	for(long long k = 0, j = 0, i = 0 ; k < n1+n2 ; k++) {
		if(lArr[i] >= rArr[j] ) temp[k] = rArr[j++];
		else temp[k] = lArr[i++];
	}
	
	//dbug("second");
	
	for(long long i = 0 , j = l; j <= h ; i++,j++) a[j] = temp[i];
}

void merge_sort( long long l , long long h) {
	if(l<h) {
		long long m = (l+h)/2;
		merge_sort(l,m);
		merge_sort(m+1,h);
		merge(l,m,h);
	}
}

int main() {
	getIntoVec();
	clock_t s ,e ;
	
	s = clock();
	
	merge_sort(0,a.size()-1);
	
	e = clock();
	
	for(unsigned long long i = 0 ; i < a.size() ; i++) cout << a[i] << " ";
	cout << "\nTime used : " << (double) (e-s)/CLOCKS_PER_SEC;
}
