#include<stdio.h>
void main(){
	int n=153,rem,sum=0;
	while(n>0){
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	printf("%d",sum);
	if(n==n){
		printf("\nArmstrong");	
	}
	else{
		printf("\nNot Armstrong");
	}
}