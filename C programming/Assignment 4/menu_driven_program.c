#include<stdio.h>
void main(){
	int no,ch;
	printf("Enter a number ");
	scanf("%d",&no);
	printf("Enter a choice press : \n1.Check Even Odd\n2.Check Prime number\n3.Check Palindrome number\n4.Check number Postive or Negative\n5.To reverse a number\n6.To find sum\n ");
	scanf("%d",&ch);
	if(ch==1){
		if(no%2==0){
			printf("Even");
		}
		else{
			printf("Odd");
		}
	}
	if(ch==2){
		int i=2;
    	int prime=1; 
    	while (i<=no/2) {
       	 if (no%i==0) {
          	  prime=0;
           	 break;
       		 }
        	i++;
    	}
   		if (prime && no>1) {
       		 printf("Prime");
    		} 
		else {
        	printf("Not Prime");
    	}
	}
	if(ch==3){
		int rev=0,rem;
		int q1=no;
		while(no>0){
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
		}
		if(q1==rev){
			printf("Palindrome");
		}
		else{
			printf("Not Palindrome");
		}
	}
	if(ch==4){
		if(no>0){
			printf("Positive");
		}
		else if(no<0){
			printf("Negative");
		}
		else
			printf("Number is 0");
	}
	if(ch==5){
		int rev=0,rem;
		int q1=no;
		while(no>0){
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
		}
		printf("%d",rev);
		
	}
	if(ch==6){
		int sum=0,rev,rem;
		while(no>0){
			rem=no%10;
			sum=sum+rem;
			no=no/10;
		}
		printf("%d",sum);
	}
	
	
	
}