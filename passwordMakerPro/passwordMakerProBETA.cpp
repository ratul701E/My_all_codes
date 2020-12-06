#include<bits/stdc++.h>
#include "Maker.h"
using namespace std;
int main() {
	Maker m;
	int choice ;

	while(true) {
		m.clr();
		m.menu();
		m.generate();

		cout << "Generated\n";
a:
		m.clr();
		m.menu();
		cout << "Generated [  " << m.showPass() << "  ]\n\n";

		m.inside_menu();
		cin >> choice;
		if(choice == 1) {
			m.mixer();
			goto a;
		}
		if(choice == 2) continue;
		if(choice == 3) { m.show_history(); goto a; }
		if(choice == 4) break;
	} 
	system("clear");
	m.add_to_file();

}
