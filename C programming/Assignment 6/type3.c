#include<stdio.h>
void sum(int,int);
void area_circle(int);
void fahrenheit(int);
void swap_numbers(int,int);
void avg_of_numbers(int,int,int,int,int);
void area_of_triangle(int,int);
void five_subject_percentage(int,int,int,int,int);
void length_breadth_perimeter(int,int);
void hours_to_min(int);
void square_cube(int);
void char_upper_or_lower(char);
void palindrome(int);
void vowel_or_not(char);
void leap_or_not(int);
void vote_eligible(int);
void accept_price(int,char);
void age_check(int);
void divisible_by_three_or_five(int);
void greatest_of_three(int,int,int);
void marks_based_result(float);
void three_side_triangle(int,int,int);
void two_no_operators(int,int,char);




void main(){
	int no1,no2,no3,age;
	float marks;
	char a;
	printf("Enter number 1: ");
	scanf("%d",&no1);
	printf("Enter number 2: ");
	scanf("%d",&no2);
	sum(no1,no2);
    area_circle(2);
    fahrenheit(46);
    swap_numbers(no1,no2);
    avg_of_numbers(6,12,2,3,8);
    area_of_triangle(10,15);
    five_subject_percentage(45,78,44,79,80);
    hours_to_min(260);
    length_breadth_perimeter(30,60);
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
    
	
	
	
	
	
}//main ends here
void sum(int a,int b){
	int c=a+b;
	printf("Sum: %d\n", c);
	
}
void area_circle(int r){
	float area=3.14*r*r;
	printf("Area of Circle: %.2f\n", area);
}
void fahrenheit(int c){
	int fahren=(c*9/5)+32;
	printf("Celsius to Fahrenheit: %d\n", fahren);
    
}
void swap_numbers(int a,int b){
	
	int temp;
	temp=b;
	b=a;
	a=temp;
	printf("After Swap- a:%d,b:%d\n",a,b);
    
}
void avg_of_numbers(int a,int b,int c,int d,int e){
	float avg=(a+b+c+d+e)/5.0;
	printf("Average: %.2f\n", avg);
     
}
void area_of_triangle(int a,int b){
	float area = 0.5*a*b;
	printf("Area of Triangle: %.2f\n", area);
     
}
void five_subject_percentage(int a,int b,int c,int d,int e){
	int total_marks=a+b+c+d+e;
	float percentage=(total_marks/500.0)*100;
	printf("Total: %d, Percentage: %.2f%%\n",total_marks,percentage);
	 
	
}
void hours_to_min(int m){
	int hour=m/60;
	printf("%d min to hours: %d\n",m,hour);
	 
}
void length_breadth_perimeter(int l,int b){
	float perimeter=2*(l+b);
	printf("Perimeter of l: %d and b=%d is %.2f\n",l,b,perimeter);
	 
}
void square_cube(int a){
 	int sqr=a*a,cube=a*a*a;
	printf("Square: %d and Cube: %d\n",sqr,cube);
	 
}
void char_upper_or_lower(char a){
	if(a>='A'&&a<='Z'){
		printf("Char is Upper Case");
		
	}
	else{
		printf("Char is Lower case\n");
	}
	 
}
void palindrome(int a){
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
void vowel_or_not(char a){
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		printf("\nIts Vowel");
		
	}
	else{
		printf("\nIts Consonant");
	}
	 
}
void leap_or_not(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		printf("\nIts Leap Year");
		
	}
	else{
		printf("Not a Leap Year");
	}
	 
}
void vote_eligible(int a){
	if(a>=18){
		printf("\nEligible to vote");
		
	}
	else{
		printf("Not Eligible to vote");
	}
	 
}
void accept_price(int price,char ch){
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

void age_check(int age){
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
void divisible_by_three_or_five(int a){
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

void greatest_of_three(int a,int b,int c){
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
void marks_based_result(float marks){
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

void three_side_triangle(int t1,int t2,int t3){
	
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
void two_no_operators(int a,int b,char op){
	
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




 