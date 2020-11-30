#include<fstream>
#include<iostream>
#include"passMaP.h"
using namespace std;

int main() {
	ofstream f;
	Password p(2,2,2);
	f.open("save.txt",ios::app);
	p.build();
	f << p.show();
	f.close();
}
