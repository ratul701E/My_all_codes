
#include<bits/stdc++.h>
using namespace std;

// functions

int& index(int[], int);
char charchar();
void indent(char *str, int indent = -1);
//void checker(int i = 5, int j); //error

// classes

class base{
protected:
    int i;
public:
    void set_i(int i){this->i=i;};
    int get_i(){return i;}
};

class derived:public base{
    int j;
public:
    int get_j(){return j;}
};

    // globally overloaded new and delete
/*
void* operator new(size_t Size){
    cout << "This is Globally Overloaded new\n";
    void *p = malloc(Size);
    return p;
}

void operator delete(void *Size){
    cout << "This is Globally Overloaded delete\n";
    free(Size);
}
*/

class MemoryAllocTestClass{
    int* val;
public:
    MemoryAllocTestClass(){}
    void set_val(int val){this->val = &val;}
    int get_val(){return *val;}
    ~MemoryAllocTestClass(){}

    void* operator new(size_t Size){
        cout << "This is local Overloaded new\n";
        return malloc(Size);
    }
    void operator delete(void* Size){
        cout << "This is local Overloaded delete\n";
        free(Size);
    }
};


template<typename T>  class Array{
    int arr_size;
    T *storage;
public:
    Array(int sizeOfarray){
        cout << "Array constructor called for size : " << sizeOfarray << endl;
        try{
            storage = new T[sizeOfarray];
        }catch(bad_alloc){
            cout << "Array failed to allocate memory\n";
        }
        arr_size = sizeOfarray;
    }

    ~Array(){delete storage;cout << "Array destructor called for size : " << arr_size << endl;}

    Array(Array &arr){
        cout << "This is copy constructor\n";
        try{
            storage = new T[arr.arr_size];
        }catch(bad_alloc){
            cout << "Array failed to allocate memory\n";
        }
        for(int i = 0 ; i < arr.arr_size ; i++){
            storage[i] = arr.storage[i];
        }
        arr_size = arr.arr_size;
    }

    int size() {return arr_size;}
    void print(){
        cout << "The array is : ";
        for(int i = 0 ; i < arr_size ; i++){
            cout << "[" << storage[i] << "]" ;
        }
        cout << endl;
    }

    void set_value(){
        for(int i = 0 ; i < arr_size ; i++){
            cout << "Enter value " << i+1 << " : ";
            cin >>  storage[i];
        }
    }
    void set_zero(){
        for(int i = 0 ; i < arr_size ; i++){
            storage[i] = 0;
        }
    }



};

int main(){
    // Example of independent ref
    /*
    int k = 10;
    int &R_k = k;
    cout << k << " " << R_k << endl;
    R_k++;
    cout << k << " " << R_k << endl;
    */

    // Example of returing ref
    /*
    int arr[5] = {5,4,3,2,1};
    index(arr, 1) = 15;
    cout << arr[0] << endl;
    */

    // base ref to derived
    /*
    derived d;
    base& b = d;
    b.set_i(10) ;
    cout << b.get_i() << endl;
    */

    // new & delete operator
    /*
    int *p = new(nothrow)int(10); // Allocating memory from heap
    if(!p){
        cout << "Allocation failed\n";
        return -1;
    }
    cout << "Address : " << p << "\tValue : " << *p << endl;
    delete p; // free allocated memory from heap
    */


    // overloading new and delete

    /*
    //int *var = new int;
    //delete var;
    MemoryAllocTestClass *obj =  new MemoryAllocTestClass();
    obj->set_val(50);
    cout << obj ->get_val() << endl;
    delete obj;
    */
    // copy constructor [for create different memory location]
    /*
    Array<int> k(2);
    k.set_value();
    k.print();
    Array<int> j(k);
    k.set_zero();
    k.print();
    j.print();
    */
    indent("indent by 5 space",5);
    indent("indent by previous used space");
    int terms = 1;
    int val = 1;
    do{
        cout << val << " ";
        val =(val*10)+1;
        terms++;
    }while(terms <= 5);
}




int& index(int arr[], int ind){
    return arr[--ind];
}

char charchar(){
    return 65;
}

void indent(char *str, int indent){
    static int i;
    if(indent >= 0) i = indent;
    else indent = i;
    for(int i = 0 ; i < indent ; i++) cout << " ";
    cout << str << endl;
}
