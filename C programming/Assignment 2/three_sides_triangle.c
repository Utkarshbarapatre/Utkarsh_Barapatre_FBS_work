#include<stdio.h>
void main(){
	int t1,t2,t3;
	printf("Enter side 1: ");
	scanf("%d",&t1);
	printf("Enter side 2: ");
	scanf("%d",&t2);
	printf("Enter side 3: ");
	scanf("%d",&t3);
	if(t1==t2 && t1==t3 && t2==t3){
		printf("Equilateral Triangle");
	}
	else{
		if(t1==t2 || t1==t3 || t2==t3){
			printf("Isosceles Triangle");
			
		}
		else{
			printf("Scalene");
		}
	}
	
}