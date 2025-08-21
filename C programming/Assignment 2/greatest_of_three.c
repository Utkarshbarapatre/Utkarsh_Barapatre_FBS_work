#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter number a: ");
	scanf("%d",&a);
	printf("Enter number b: ");
	scanf("%d",&b);
	printf("Enter number c: ");
	scanf("%d",&c);
	if(a>b){
		printf("A is greater");
	}
	else{
		if(a>c){
			printf("A is greater");
			
		}
		else{
			if(b>c){
				printf("B is greater");
			}
			else{
				printf("C is greater");
			}
		}
	}
	
}