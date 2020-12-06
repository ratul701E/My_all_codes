#include <stdio.h>
int user_function(int num , int pow) {
	int n = 1;
	for(int i = 0 ; i < pow ; i++) n*=num;
	return n;
}
int main() {
	int n;
	printf("enter value : " );
	scanf("%i",&n);
	printf("Enter power : ");
	int p;
	scanf("%i",&p);
	
	printf("Answer : %i \n", user_function(n,p));
	
}
