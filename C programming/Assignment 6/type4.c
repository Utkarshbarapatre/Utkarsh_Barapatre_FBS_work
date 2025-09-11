#include<stdio.h>
int sum(int,int);
int area_circle(int);
int fahrenheit(int);
int swap_numbers(int *a,int *b);
float avg_of_numbers(int,int,int,int,int);
float area_of_triangle(int,int);
float five_subject_percentage(int,int,int,int,int);
int length_breadth_perimeter(int,int);
int hours_to_min(int);
int square_cube(int);
int char_upper_or_lower(char);
int palindrome(int);
int vowel_or_not(char);
int leap_or_not(int);
int vote_eligible(int);
int accept_price(int,char);
int age_check(int);
int divisible_by_three_or_five(int);
int greatest_of_three(int,int,int);
int marks_based_result(float);
int three_side_triangle(int,int,int);
int two_no_operators(int,int,char);
int print_numbers(int);
int tables(int);
int sum_to_five(int);
int prime(int);
int armstrong(int);
int perfect(int);
int factorial(int);
int strong_number(int);
int palindrome_three(int);
int sum_of_first_and_last_digit(int);
int range_armstrong(int);
int menu_driven(int,int);



int main(){
	int no1,no2,no3,age,num1,c;
	float marks;
	char a;
	printf("Enter number 1: ");
	scanf("%d",&no1);
	printf("Enter number 2: ");
	scanf("%d",&no2);
	printf("Sum: %d\n", sum(no1,no2));
    printf("Area: %d\n",area_circle(2));
    printf("fahrenheit: %d\n",fahrenheit(46));
    swap_numbers(&no1, &no2);
    printf("Swapped values: a=%d, b=%d\n", no1, no2);
    printf("Average: %.2f\n",avg_of_numbers(10,20,30,40,50));
    printf("Triangle Area: %.2f\n",area_of_triangle(10,15));
    printf("Percentage: %.2f%%\n",five_subject_percentage(80,85,78,90,88));
    printf("Hours to Minutes: %d\n",hours_to_min(2));
    printf("Perimeter: %d\n",length_breadth_perimeter(10,20));
    printf("Enter number for cube: ");
	scanf("%d",&no1);
    square_cube(no1);
    printf("Enter a character:");
	scanf(" %c",&a);
    char_upper_or_lower(a);
    printf("Enter number for palindrome: ");
	scanf(" %d",&no1);
    palindrome(no1);
    printf("\nEnter a character:");
	scanf(" %c",&a);
    vowel_or_not(a);
    leap_or_not(2004);
    printf("\nEnter your age: ");
	scanf("%d",&age);
    vote_eligible(age);
    printf("\nEnter Price ");
	scanf(" %d",&no1);
	printf("Enter whether you are student y or n: ");
	scanf(" %c",&a);
    accept_price(no1,a);
    printf("\nEnter your age: ");
	scanf("%d",&age);
    age_check(age);
    printf("\nEnter a no: ");
	scanf(" %d",&no1);
    divisible_by_three_or_five(no1);
    printf("\nEnter number a: ");
	scanf("%d",&no1);
	printf("Enter number b: ");
	scanf("%d",&no2);
	printf("Enter number c: ");
	scanf("%d",&no3);
    greatest_of_three(no1,no2,no3);
    printf("\nEnter Marks: ");
	scanf(" %f",&marks);
    marks_based_result(marks);
    printf("\nEnter side 1: ");
	scanf("%d",&no1);
	printf("Enter side 2: ");
	scanf("%d",&no2);
	printf("Enter side 3: ");
	scanf("%d",&no3);
    three_side_triangle(no1,no2,no3);
    printf("\nEnter no. 1 ");
	scanf("%d",&no1);
	printf("Enter no. 2 ");
	scanf("%d",&no2);
	printf("Enter operator like %+-/*  ");
	scanf(" %c",&a);
    two_no_operators(no1,no2,a);
    print_numbers(0);
	tables(1);
	sum_to_five(5);
	prime(7);
	armstrong(153);
	perfect(28);
	factorial(5);
	strong_number(145);
	palindrome_three(121);
	sum_of_first_and_last_digit(12345);
	printf("\nEnter a number ");
	scanf(" %d",&num1);
	range_armstrong(num1);
	printf("Enter a number ");
	scanf(" %d",&no1);
	printf("Enter a choice press : \n1.Check Even Odd\n2.Check Prime number\n3.Check Palindrome number\n4.Check number Postive or Negative\n5.To reverse a number\n6.To find sum\n ");
	scanf("%d",&no2);
	menu_driven(no1,no2);
	return 0;
    
	
	
	
	
	
}//main ends here
int sum(int a,int b){
	return a+b;
	
}
int area_circle(int r){
	return 3.14*r*r;
}
int fahrenheit(int c){
	return (c*9/5)+32; 
    
}
int swap_numbers(int *a,int *b){
	
	int temp=*a;
    *a=*b;
    *b=temp;
	
    
}
float avg_of_numbers(int a,int b,int c,int d,int e){
	return (a+b+c+d+e)/5.0;
	
     
}
float area_of_triangle(int a,int b){
	return 0.5*a*b;
     
}
float five_subject_percentage(int a,int b,int c,int d,int e){
	int total_marks=a+b+c+d+e;
	return (total_marks/500.0)*100;
	 
	
}
int hours_to_min(int m){
	return m*60;
	
	 
}
int length_breadth_perimeter(int l,int b){
	return 2*(l+b);
	
	 
}
int square_cube(int a){
 	int sqr=a*a,cube=a*a*a;
	 
}
int char_upper_or_lower(char a){
	if(a>='A'&&a<='Z'){
		printf("Char is Upper Case");
		
	}
	else{
		printf("Char is Lower case\n");
	}
	 
}
int palindrome(int a){
	int temp,rev,r1,r2,r3,q1;
	temp=a;
	r1=temp%10;
	q1=temp/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+1;
	if(temp==rev){
		printf("\nPalindrome");
	}
	else{
		printf("\nNot a Palindrome");
	}
	 
}
int vowel_or_not(char a){
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		printf("\nIts Vowel");
		
	}
	else{
		printf("\nIts Consonant");
	}
	 
}
int leap_or_not(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		printf("\nIts Leap Year");
		
	}
	else{
		printf("Not a Leap Year");
	}
	 
}
int vote_eligible(int a){
	if(a>=18){
		printf("\nEligible to vote");
		
	}
	else{
		printf("Not Eligible to vote");
	}
	 
}
int accept_price(int price,char ch){
	int fprice;
	if(ch=='y'){
		if(price>=500){
			fprice=price-price*0.2;
			printf("\nDiscount is %d",fprice);
		}
		else{
			fprice=price-price*0.10;
			printf(" \nDiscount is %d",fprice);
			 
		}
	}
	else{
		if(ch=='n'){
			if(price>600){
				fprice=price-price*0.15;
				printf(" \nDiscount is %d",fprice);
				
			}
			else{
				printf("\nNo Discount");
			}
		}
	}
	 
}

int age_check(int age){
	if(age<12){
		printf("\nChild");
	}
	else{
		if(age>=12 && age<=19){
			printf("\nTeenager");
		}
		else{
			if(age>=20 && age<=59){
				printf("\nAdult");
			}
			else{
				if(age>=60){
					printf("\nSenior");
				}
			}
		}
		
	}
	 
}
int divisible_by_three_or_five(int a){
	if(a%3==0 && a%5!=0){
		printf("\nno. is divisible by 3 not 5");
		
	}
	else{
		if(a%5==0 && a%3!=0){
			printf("\nno. is divisible by 5 not by 3");
		}
		else{
			if(a%3==0 && a%5==0){
				printf("\nno. divisible by both");
			}
		}
		
	}
	 
}

int greatest_of_three(int a,int b,int c){
	if(a>b){
		printf("A is greater");
	}
	else{
		if(a>c){
			printf("A is greater");
			
		}
		else{
			if(b>c){
				printf("B is greater");
			}
			else{
				printf("C is greater");
			}
		}
	}
	 
}
int marks_based_result(float marks){
	if(marks>=75){
		printf("Distinction");
	}
	else{
		if(marks<75 && marks>=65){
			printf("First Class");
			
		}
		else{
			if(marks<65 && marks>=55){
				printf("Second Class");
			}
			else{
				if(marks<55 && marks>=40){
					printf("Pass Class");
				}
				else{
					if(marks<=40){
						printf("Fail");
					}
					
				}
				
			}
			
		}
	}
	 
}

int three_side_triangle(int t1,int t2,int t3){
	
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
int two_no_operators(int a,int b,char op){
	
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
int print_numbers(int i){
	while(i<=9){
		i++;
		printf("\n %d ",i);
	}
	 printf("\n ");
}
int tables(int n){
	while(n<=10){
		printf("%d \n",5*n);
		n++;
	}
}
int sum_to_five(int n){
	int i=1,sum=0;
	while(i<=n){
		sum+=i;
		i++;
		
	}
	printf("\nSum is %d from 1 to 5",sum);
}
int prime(int n){
    int i=2;
    int prime=1; 
    while (i<=n/2) {
        if (n%i==0) {
            prime=0;
            break;
        }
        i++;
    }
    if (prime && n>1) {
        printf("\nPrime");
    } else {
        printf("\nNot Prime");
    }
}
int armstrong(int n){
	int rem,sum=0;
	while(n>0){
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(n==n){
		printf("\nArmstrong");	
	}
	else{
		printf("\nNot Armstrong");
	}
}

int perfect(int n){
	int sum=0;
	int i=1;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("\nPerfect Number");
	}
	else{
		printf("\nNot a Perfect number");
	}
}
int factorial(int n){
	int fct=1;
	int i=1;
	while(i<=n){
		fct=fct*i;
		i++;
	}
	printf("\nFactorial is %d",fct);
}

int strong_number(int n){
    int temp=n;   
    int sum=0,rem;
    while(n>0) {
        rem=n%10;
        int fact=1;   
        int i=1;
        while(i<=rem){
            fact*=i;
            i++;
        }
        sum+=fact;
        n/=10;
    }
    if(sum==temp) {
        printf("\nStrong Number");
    } else {
        printf("\nNot a Strong Number");
    }
}
int palindrome_three(int n){
	int rev=0,rem;
	int q1=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(q1==rev){
		printf("\npalindrome");
	}
	else{
		printf("\nnot palindrome");
	}
}
int sum_of_first_and_last_digit(int n){
	int q1,r1,r2;
	r1=n%10;
	q1=n;
	while(q1>=10){
		q1=q1/10;
	}
	r2=q1;
	printf("\nSum of first and last digit is:%d ",r1+r2);
}
int range_armstrong(int no){
	int sum=0,count=0,i,res,rem,temp;
	for(int num = 1; num <= no; num++) {
        int temp = num, sum = 0, count = 0, rem, res;
		while(temp>0){
			count++;
			temp=temp/10;
		}
		temp=num;
		while(temp>0){
			rem=temp%10;
			res=1;
			for(i=1;i<=count;i++){
				res=res*rem;
			}
			sum=sum+res;
			temp=temp/10;
		}
		if(sum==num){
			printf("%d ",num);
		}
	}
}

int menu_driven(int no,int ch){
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





 