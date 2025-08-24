#include<stdio.h>
void main(){
	int n=5;
	int fct=1;
	int i=1;
	while(i<=n){
		fct=fct*i;
		i++;
		
	}
	printf("Factorial is %d",fct);
}