#include <stdio.h>
int main(){
	int marks;
	printf("Enter your marks");
	scanf("%d",&marks);
	
	if(marks>=35 && marks<=50){
		printf("grade c");
	}
    else if(marks>=50 && marks<=75){
    	printf("grade b");
	}
    else if(marks>=75 && marks<=90){
    	printf("grade A");
	}
	else{
		printf("fail");
	}
	return 0;
}
