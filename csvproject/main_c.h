#include<bits/stdc++.h>
#include "person.h"
#include "subjects.h"

using namespace std;

class Main {
	map<string , Person> allPerson;
	
	// funtions
	public:
	void add_person() {
		string name , roll , id;
		cout << "Name : " ;
		cin >> name;
		cout << "Roll : " ;
		cin >> roll;
		cout << "ID : " ;
		cin >> id;
		allPerson.insert({id ,Person(name , roll , id)});
		//allPerson[id].countGPA();
	}
	
	void show_quantity() {
		printf("%ld",allPerson.size());
	}
	
	void countGPA() {

		for(auto current : allPerson) {
			current.second.countGPA();
		}
		
	}
	
	void showListOfAll() {
		
		for(auto current : allPerson) {
			printf("%s : %f\n",current.second.name.c_str() ,current.second.gpa);
		}
	}
	
	void edit_numbers() {
		
		printf("Enter id : ");
		string id;
		cin >> id;
		printf("Name : %s\n",allPerson[id].name.c_str());
		long n = subjects.size();
		for(long i = 0 ; i < n ; i++) {
			long temp;
			printf("%s (current number %ld ) : ",subjects[i].c_str() , allPerson[id].marks[i]);
			scanf("%ld",&temp);
			allPerson[id].marks[i] = temp;
		}		
	}
	
	void edit_numbers_forAll() {
		long n = subjects.size();
		for(auto current : allPerson) {
			printf("Name : %s\n",current.second.name.c_str());
			for(long j = 0 ; j < n ; j++) {
				long temp;
				printf("%s (current number %ld ) : ",subjects[j].c_str() , current.second.marks[j]);
				scanf("%ld",&temp);
				current.second.marks[j] = temp;
			}
		}
	}
};
