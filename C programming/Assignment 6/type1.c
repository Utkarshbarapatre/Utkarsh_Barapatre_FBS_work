#include<stdio.h>
void sum();
void area_circle();
void fahrenheit();
void swap_numbers();
void avg_of_numbers();
void area_of_triangle();
void five_subject_percentage();
void length_breadth_perimeter();
void hours_to_min();
void square_cube();
void char_upper_or_lower();
void palindrome();
void vowel_or_not();
void leap_or_not();
void vote_eligible();
void accept_price();
void age_check();
void divisible_by_three_or_five();
void greatest_of_three();
void marks_based_result();
void three_side_triangle();
void two_no_perators();




void main(){
	sum();
	area_circle();
	fahrenheit();
	swap_numbers();
	avg_of_numbers();
	area_of_triangle();
	five_subject_percentage();
	hours_to_min();
	length_breadth_perimeter();
	square_cube();
	char_upper_or_lower();
	palindrome();
	vowel_or_not();
	leap_or_not();
	vote_eligible();
	accept_price();
	age_check();
	divisible_by_three_or_five();
	greatest_of_three();
	marks_based_result();
	three_side_triangle();
	two_no_perators();
	
	
	
	
	
	
}//main ends here
void sum(){
	int a=2,b=6;
	int c=a+b;
	printf("Sum of %d and %d is %d\n",a,b,c);
	
}
void area_circle(){
	int r=2;
	int area=3.14*r*r;
	printf("Area is %d\n",area);
}
void fahrenheit(){
	int celsius=46;
	int fahren=(celsius*9/5)+32;
	printf("Celsius to Fahrenheit:%d \n",fahren);
}
void swap_numbers(){
	int a=20,b=10;
	int temp;
	temp=b;
	b=a;
	a=temp;
	
	printf("a:%d and b:%d\n",a,b);
	
}
void avg_of_numbers(){
	int a=4,b=2,c=5,d=7,e=8;
	float avg=(a+b+c+d+e)/5;
	float hvag=(4+3+5+6+2)/5;
	printf("Avg is %f",avg);
	printf(" Direct Avg is %f\n",hvag);
}
void area_of_triangle(){
	int base=10,height=15;
	float area=0.5*base*height;
	printf("Area: %f\n",area);
}
void five_subject_percentage(){
	int a=78,b=81,c=64,d=87,e=69;
	int total_marks=a+b+c+d+e;
	float percentage=(total_marks/500.0)*100;
	printf("Total Marks: %d and Percentage: %f\n",total_marks,percentage);
}
void hours_to_min(){
	int min=120;
	int hour=min/60;
	printf("%d min to hours: %d\n",min,hour);
}
void length_breadth_perimeter(){
	int l=30, b=60;
	float perimeter=2*(l+b);
	printf("Perimeter of l: %d and b=%d is %f\n",l,b,perimeter);
}
void square_cube(){
	int a=3;
 	int sqr=a*a,cube=a*a*a;
	printf("Square: %d and Cube: %d\n",sqr,cube);
}
void char_upper_or_lower(){
	char a='b';
	if(a>='A'&&a<='Z'){
		printf("Char is Upper Case");
		
	}
	else{
		printf("Char is Lower case\n");
	}
}
void palindrome(){
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
void vowel_or_not(){
	char a='A';
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		printf("\nIts Vowel");
		
	}
	else{
		printf("Its Consonant");
	}
}
void leap_or_not(){
	int y=2004;
	if(y%4==0&&y%100!=0||y%400==0){
		printf("\nIts Leap Year");
		
	}
	else{
		printf("Not a Leap Year");
	}
}
void vote_eligible(){
	int a=19;
	if(a>=18){
		printf("\nEligible to vote");
		
	}
	else{
		printf("Not Eligible to vote");
	}
}
void accept_price(){
	int price,fprice;
	char ch;
	printf("Enter Price ");
	scanf(" %d",&price);
	printf("Enter whether you are student y or n: ");
	scanf(" %c",&ch);
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

void age_check(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
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
void divisible_by_three_or_five(){
	int a;
	printf("Enter a no: ");
	scanf(" %d",&a);
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

void greatest_of_three(){
	int a,b,c;
	printf("Enter number a: ");
	scanf("%d",&a);
	printf("Enter number b: ");
	scanf("%d",&b);
	printf("Enter number c: ");
	scanf("%d",&c);
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
void marks_based_result(){
	float marks;
	printf("Enter Marks: ");
	scanf(" %f",&marks);
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

void three_side_triangle(){
	int t1,t2,t3;
	printf("Enter side 1: ");
	scanf("%d",&t1);
	printf("Enter side 2: ");
	scanf("%d",&t2);
	printf("Enter side 3: ");
	scanf("%d",&t3);
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
void two_no_perators(){
	int a,b;
	char op;
	printf("Enter no. 1 ");
	scanf("%d",&a);
	printf("Enter no. 2 ");
	scanf("%d",&b);
	printf("Enter operator like %+-/*  ");
	scanf(" %c",&op);
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




