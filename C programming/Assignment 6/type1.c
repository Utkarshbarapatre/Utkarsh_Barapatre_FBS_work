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
void print_numbers();
void tables();
void sum_to_five();
void prime();
void armstrong();
void perfect();
void factorial();
void strong_number();
void palindrome_three();
void sum_of_first_and_last_digit();
void range_armstrong();
void menu_driven();
void range_perfect_number();
void range_prime();
void range_strong_number();




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
	print_numbers();
	tables();
	sum_to_five();
	prime();
	armstrong();
	perfect();
	factorial();
	strong_number();
	palindrome_three();
	sum_of_first_and_last_digit();
	range_armstrong();
	menu_driven();
	range_perfect_number();
	range_prime();
	range_strong_number();
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
	printf("\nEnter Price ");
	scanf(" %d",&price);
	printf("\nEnter whether you are student y or n: ");
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
	printf("\nEnter your age: ");
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
	printf("\nEnter a no: ");
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
	printf("\nEnter number a: ");
	scanf("%d",&a);
	printf("\nEnter number b: ");
	scanf("%d",&b);
	printf("\nEnter number c: ");
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
	printf("\nEnter Marks: ");
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
	printf("\nEnter side 1: ");
	scanf("%d",&t1);
	printf("\nEnter side 2: ");
	scanf("%d",&t2);
	printf("\nEnter side 3: ");
	scanf("%d",&t3);
	if(t1==t2 && t1==t3 && t2==t3){
		printf("\nEquilateral Triangle");
	}
	else{
		if(t1==t2 || t1==t3 || t2==t3){
			printf("\nIsosceles Triangle");
			
		}
		else{
			printf("\nScalene");
		}
	}
}
void two_no_perators(){
	int a,b;
	char op;
	printf("\nEnter no. 1 ");
	scanf("%d",&a);
	printf("\nEnter no. 2 ");
	scanf("%d",&b);
	printf("\nEnter operator like %+-/*  ");
	scanf(" %c",&op);
	if(op=='+'){
		printf("Addition is: %d\n",a+b);
		}
	else{
		if(op=='-')
		{
		printf("Substract is: %d\n",a-b);
		}
		else
		{
			if(op=='%'){
				printf("Mod is: %d\n",a%b);
			}
			else{
				if(op=='/'){
					printf("Division is: %d\n",a/b);
				}
				else{
					if(op=='*'){
						printf("Multiply is: %d\n",a*b);
					}
				}
			}
		}
	}
}
void print_numbers(){
	int i=0;
	while(i<=9){
		i++;
		printf("%d ",i);
	}
	 printf("\n ");
}
void tables(){
	int n=1;
	while(n<=10){
		printf("%d \n",5*n);
		n++;
	}
}
void sum_to_five(){
	int i=1,n=5,sum=0;
	while(i<=n){
		sum+=i;
		i++;
		
	}
	printf("\nSum is %d from 1 to 5",sum);
}
void prime(){
	int n=7;
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
void armstrong(){
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

void perfect(){
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
		printf("\nPerfect Number");
	}
	else{
		printf("\nNot a Perfect number");
	}
}
void factorial(){
	int n=5;
	int fct=1;
	int i=1;
	while(i<=n){
		fct=fct*i;
		i++;
	}
	printf("\nFactorial is %d",fct);
}

void strong_number(){
	int n=145;
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
void palindrome_three(){
	int rev=0,rem;
	int n=121,q1=n;
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
void sum_of_first_and_last_digit(){
	int n=12345;
	int q1,r1,r2;
	r1=n%10;
	q1=n;
	while(q1>=10){
		q1=q1/10;
	}
	r2=q1;
	printf("\nSum of first and last digit is:%d ",r1+r2);
}
void range_armstrong(){
	int no,sum=0,count=0,i,res,rem,temp;
	printf("\nEnter a number ");
	scanf("%d",&no);
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

void menu_driven(){
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

void range_perfect_number(){
	int no,i,j,sum;
	printf("\nEnter a number "); 
	scanf("%d",&no);
	for(i=1;i<=no;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0)
			sum=sum+j;
		}
		if(sum==i){
		printf("%d ",i);
	}
		
	}
}
void range_prime(){
	int no,num,count=0,i;
	printf("\nEnter a number "); 
	scanf("%d",&no);
	for(num=1;num<=no;num++){
		count=0;
		for(i=1;i<=num;i++){
			if(num%i==0){
				count++;
			}
			
		}
		if(count==2){
			printf("%d ",num);
		}	
	}
}

void range_strong_number(){
	int no,rem,fact,temp,sum,num;
	printf("\nEnter nuumber ");
	scanf("%d",&no);
	for(num=1;num<=no;num++){
		temp=num;
		sum=0;
		while(temp>0){
			rem=temp%10;
			fact=1;
			for(int i=1;i<=rem;i++){
				fact=fact*i;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==num){
			printf("%d ",num);
		}
	}
}






