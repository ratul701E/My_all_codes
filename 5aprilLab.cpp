#include <bits/stdc++.h>
using namespace std;

class CustomerDirectory {
    string *cusFirstName;
    string *cusLastName;
    string *cusDoB;
    string *cusTelNum;
    string *cusCountry;

    public :
    CustomerDirectory(){
         cusFirstName = new string();
         cusLastName = new string();
         cusDoB = new string();
         cusTelNum = new string();
         cusCountry = new string();

    }
    ~CustomerDirectory(){
        delete cusFirstName , cusLastName , cusDoB , cusTelNum , cusCountry;
    }
    void setCusInfo(string fname , string lname , string dob , string tel ,string coun){
        *this -> cusFirstName = fname;
        *this -> cusLastName = lname;
        *this -> cusDoB = dob;
        *this -> cusTelNum = tel;
        *this -> cusCountry = coun; 
    }
    void getCusInfo(){
        cout << "First name : " << *this -> cusFirstName << endl;
        cout << "Last name : " << *this -> cusLastName << endl;
        cout << "DoB : " << *this -> cusDoB << endl;
        cout << "Telephone Number  : " << *this -> cusTelNum << endl;
        cout << "Country : " << *this -> cusCountry << endl;
    }
};

int main(){

    CustomerDirectory *cus101 = new CustomerDirectory() , *cus102  = new CustomerDirectory() ;
    cus101 -> setCusInfo("Ratul","Khan", "12-12-2000","011111111111" , "Bangladeshi");
    cus102 -> setCusInfo("Asiya","Akter", "22-10-2003","0132451721625" , "Bangladeshi");
    cus101 -> getCusInfo();
    cus102 -> getCusInfo();
    delete cus101 , cus102;
}