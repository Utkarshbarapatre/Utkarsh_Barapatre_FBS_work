#include<stdio.h>
void main(){
	int a;
	printf("Enter a no: ");
	scanf(" %d",&a);
	if(a%3==0 && a%5!=0){
		printf("no. is divisible by 3 not 5");
		
	}
	else{
		if(a%5==0 && a%3!=0){
			printf("no. is divisible by 5 not by 3");
		}
		else{
			if(a%3==0 && a%5==0){
				printf("no. divisible by both");
			}
		}
		
	}
}