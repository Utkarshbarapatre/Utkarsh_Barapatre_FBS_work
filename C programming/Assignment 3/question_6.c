#include<stdio.h>
void main(){
	int n=28;
	int sum=0;
	int i=1;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("Perfect Number");
	}
	else{
		printf("Not a Perfect number");
	}
}