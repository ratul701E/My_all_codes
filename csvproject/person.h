#include<bits/stdc++.h>
using namespace std;
class Person {
	public : 
		vector<long>marks;
		string name;
		float gpa;
		long long total_marks;
		string roll;
		string section;
		string uid;
		string id;
		// constractor
		
		Person(string nn , string rr , string idd) {
			name = nn;
			id = idd;
			roll = rr;
		}
		Person(const Person &other) {
			
			name = other.name;
			id = other.id;
			roll = other.roll;
		}
		// functions
		void totalMarks() {
			long long total = 0;
			long n = marks.size();
			for(long i = 0 ; i < n ; i++) {
				total += marks[i];
			}
			 total_marks = total;
		}
		void countGPA() {
			long n = marks.size();
			totalMarks();
			gpa = total_marks / (float) n;
		}
		
		
		
		
};
