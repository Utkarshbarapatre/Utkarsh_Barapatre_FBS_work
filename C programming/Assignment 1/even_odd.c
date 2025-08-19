#include<stdio.h>
void main(){
	int a=131,rev,r1,r2,r3,q1;
	r1=a%10;
	q1=a/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+1;
	if(a==rev){
		printf("Palindrome");
	}
	else{
		printf("Not a Palindrome");
	}
}