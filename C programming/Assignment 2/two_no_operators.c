#include<stdio.h>
void main(){
	int a,b;
	char op;
	printf("Enter no. 1 ");
	scanf("%d",&a);
	printf("Enter no. 2 ");
	scanf("%d",&b);
	printf("Enter operator like %+-/*  ");
	scanf(" %c",&op);
	if(op=='+'){
		printf("Addition is: %d",a+b);
		}
	else{
		if(op=='-')
		{
		printf("Substract is: %d",a-b);
		}
		else
		{
			if(op=='%'){
				printf("Mod is: %d",a%b);
			}
			else{
				if(op=='/'){
					printf("Division is: %d",a/b);
				}
				else{
					if(op=='*'){
						printf("Multiply is: %d",a*b);
					}
				}
			}
		}
	}	
}