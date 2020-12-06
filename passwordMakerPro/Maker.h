#include "passMaP.h"
#include <bits/stdc++.h>
#include<fstream>
using namespace std;

class Maker {
	vector<string> passes;
	string pas;
	ofstream f;
	public:
		
		
		void menu() {
			cout << "Rules:\n1. Type how many charecter you want to add in password. (upper and lower will mixed)\n2. Type how many special symbol you want to add.\n3. Type how many number you want to add.\n\n\n< input > ";
		}


		void inside_menu() {
			cout << "1. Remake your current password.\n2. Generate another password.\n3. History\n4. exit" << endl;
		}

		void generate() {
			int a,b,c;
			cin >> a >> b >> c;
			cout << "done\n";
			Password p(a,b,c);
			p.build();
			cout << "built\n";
			pas = p.show();
			passes.push_back(pas);
		}

		string showPass() {
			return pas;
		}

		void clr() {
			system("clear");
		}

		void mixer() {
			Password p(2,2,2);
			p.mixer(pas);
			pas = p.show();
			passes.push_back(pas);
		}
		
		void add_to_file() {
			f.open("password.txt",ios::app);
			for(string s :  passes) {
				f << s <<endl;
			}
			f.close();
		}
		void show_history() {
			clr();
			if(passes.size() == 0) { cout << "No Data";
			return;
			}
			for(int i = 0; i < passes.size() ; i++) {
				cout << ">  "<<passes[i] << "   .........size " << passes[i].size() << endl;
				
			}
			cin.ignore();
			cin.get();
		}

};


