#include<bits/stdc++.h>
using namespace std;

vector<int>a;
void getIntoVec() {
	ifstream f("input.txt");
	int read;
	while(f >> read ) a.push_back(read);
}

int main() {
	getIntoVec();
	clock_t s , e;
	s = clock();
	for(unsigned long long i = 0 ; i < a.size() ; i++) {
        for(unsigned long long j = 0 ; j < a.size()-1-i ; j++) {
            if(a[j] > a[j+1]) swap(a[j],a[j+1]);
        }
    }
    e = clock();
    
    for(unsigned long long i = 0 ; i < a.size() ; i++) cout << a[i] << " ";
    cout << "\nTime used : " << (double) (e-s)/CLOCKS_PER_SEC;
	
}
