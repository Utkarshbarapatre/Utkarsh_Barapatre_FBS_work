#include<stdio.h>
int main(){
	int sum=0;
	for(int i=1;i<=5;i+=2){
		sum=sum+i;
	}
	printf("Sum is %d",sum);
}