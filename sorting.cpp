#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define n 1000

int a[10] = {1,2,5,4,9,4,6,4,56,5};
void disp() {
    for(int i =0 ; i< 9; i++) {
            cout << a[i] << "  ";
        }
        cout << endl;
}

void put_value() {
	for(int i = 0; i < n ; i++){
		a[i] = rand() % 90 + 10;
	}
}
// bubble sort
void bubble_sort() {
	cout << "Bubble sort" << endl;
    for(int i = 0 ; i < n ; i++) {
            for(int j = 0; j < n-i-1 ; j++ ) {
                if(a[j] > a[j+1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }

}

// selection sort

void selection_sort() {
	cout << "Selection sort" << endl;
    int maximum;
    for(int i = n-1 ; i >= 0 ; i--) {
        maximum = i;
        for(int j = 0 ; j < i ; j++) {
                if(a[j] > a[maximum]) maximum = j;
        }
        swap(a[i] , a[maximum]);
    }
}

void insertion_sort() {
	cout << "Insertion sort" << endl;
	for(int i = 0 ; i < 9 ; i++) {
		int j = i;
		while(j > 0 and a[j] < a[j-1] ) {
			swap(a[j],a[j-1]);
			j--;
		}
	}
	
} 



void merge(int low,int mid,int high) {
	int i = low;
	int j = mid+1;
	int arr[high-low+1];
	int k = 0;
	for(int s = low ; s <= high ; s++);
	{
		if(i > mid)  arr[k++] = a[j++];

		else if ( j > high) arr[k++] = a[i++];

		else if(a[i] > a[j]) arr[k++] = a[j++];

		else arr[k++] = a[i++];
	}

	for(int m = 0; m < k;m++) {
		a[low++] = arr[m];
	}



}

// merge sort

void merge_sort(int low, int high) {
	if(low < high) {
		int mid = (high+low)/2;
		merge_sort(low,mid);
		merge_sort(mid+1,high);
		merge(low,mid,high);
	}
}

int main() {
	
	srand(time(0));
	
	/*put_value();
        bubble_sort();
        disp();*/

	/*put_value;
        selection_sort();
        disp();*/

	/*put_value();
	insertion_sort();
	disp();*/

	//put_value();
	merge_sort(0,9);
	disp();




}








//
