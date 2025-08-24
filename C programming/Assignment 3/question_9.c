#include<stdio.h>
void main(){
	int rev=0,rem;
	int n=121,q1=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(q1==rev){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
}