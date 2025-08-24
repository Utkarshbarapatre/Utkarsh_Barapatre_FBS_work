#include<stdio.h>
void main(){
	int n=12345;
	int q1,r1,r2;
	r1=n%10;
	q1=n;
	while(q1>=10){
		q1=q1/10;
	}
	r2=q1;
	printf("sum of first and last digit is:%d ",r1+r2);
}