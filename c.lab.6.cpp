#include <stdio.h>
int main (){
	int age;
	printf("Enter your age");
	scanf(" % d", & age);
	if (age>18){
		printf("Eligble to voting");
	}
	else{
		printf("Not eligble to voting");
	}
	return 0;
}