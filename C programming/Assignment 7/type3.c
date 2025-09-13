#include<stdio.h>
void sum(int*,int*);
void area_circle(int*);
void fahrenheit(int*);
void swap_numbers(int*,int*);
void avg_of_numbers(int*,int*,int*,int*,int*);
void area_of_triangle(int*,int*);
void five_subject_percentage(int*,int*,int*,int*,int*);
void length_breadth_perimeter(int*,int*);
void hours_to_min(int*);
void square_cube(int*);
void char_upper_or_lower(char*);
void palindrome(int*);
void vowel_or_not(char*);
void leap_or_not(int*);
void vote_eligible(int*);
void accept_price(int*,char*);
void age_check(int*);
void divisible_by_three_or_five(int*);
void greatest_of_three(int*,int*,int*);
void marks_based_result(float*);
void three_side_triangle(int*,int*,int*);
void two_no_operators(int*,int*,char*);
void print_numbers(int*);
void tables(int*);
void sum_to_five(int*);
void prime(int*);
void armstrong(int*);
void perfect(int*);
void factorial(int*);
void strong_number(int*);
void palindrome_three(int*);
void sum_of_first_and_last_digit(int*);
void range_armstrong(int*);
void menu_driven(int*,int*);
void range_perfect_number(int*);
void range_prime(int*);
void range_strong_number(int*);



void main(){
	int no1,no2,no3,age;
	float marks;
	char a;
	printf("Enter number 1: ");
	scanf("%d",&no1);
	printf("Enter number 2: ");
	scanf("%d",&no2);
	sum(&no1,&no2);
    int radius=2;
    area_circle(&radius);
    int celsius=46;
    fahrenheit(&celsius);
    swap_numbers(&no1,&no2);
    int n1=6,n2=12,n3=2,n4=3,n5=8;
    avg_of_numbers(&n1, &n2, &n3, &n4, &n5);
    int base=10,height=15;
    area_of_triangle(&base, &height);
    int s1=45,s2=78,s3=44,s4=79,s5=80;
    five_subject_percentage(&s1, &s2, &s3, &s4, &s5);
    int minutes=260;
    hours_to_min(&minutes);
    int length=30,breadth=60;
    length_breadth_perimeter(&length, &breadth);
    printf("Enter number for cube: ");
	scanf("%d",&no1);
    square_cube(&no1);
    printf("Enter a character:");
	scanf(" %c",&a);
    char_upper_or_lower(&a);
    printf("Enter number for palindrome: ");
	scanf(" %d",&no1);
    palindrome(&no1);
    printf("\nEnter a character:");
	scanf(" %c",&a);
    vowel_or_not(&a);
    int year=2004;
    leap_or_not(&year);
    printf("\nEnter your age: ");
	scanf("%d",&age);
    vote_eligible(&age);
    printf("\nEnter Price ");
	scanf(" %d",&no1);
	printf("Enter whether you are student y or n: ");
	scanf(" %c",&a);
    accept_price(&no1,&a);
    printf("\nEnter your age: ");
	scanf("%d",&age);
    age_check(&age);
    printf("\nEnter a no: ");
	scanf(" %d",&no1);
    divisible_by_three_or_five(&no1);
    printf("\nEnter number a: ");
	scanf("%d",&no1);
	printf("Enter number b: ");
	scanf("%d",&no2);
	printf("Enter number c: ");
	scanf("%d",&no3);
    greatest_of_three(&no1,&no2,&no3);
    printf("\nEnter Marks: ");
	scanf(" %f",&marks);
    marks_based_result(&marks);
    printf("\nEnter side 1: ");
	scanf("%d",&no1);
	printf("Enter side 2: ");
	scanf("%d",&no2);
	printf("Enter side 3: ");
	scanf("%d",&no3);
    three_side_triangle(&no1,&no2,&no3);
    printf("\nEnter no. 1 ");
	scanf("%d",&no1);
	printf("Enter no. 2 ");
	scanf("%d",&no2);
	printf("Enter operator like %+-/*  ");
	scanf(" %c",&a);
    two_no_operators(&no1,&no2,&a);
    int start=0;
    print_numbers(&start);
	int tab=1;
    tables(&tab);
	int upto=5;
    sum_to_five(&upto);
    int check=7;
    prime(&check);
    int arm=153;
    armstrong(&arm);
    int perf=28;
    perfect(&perf);
    int fact=5;
    factorial(&fact);
    int strong=145;
    strong_number(&strong);
	int pali=121;
    palindrome_three(&pali);
    int sum_digits=12345;
    sum_of_first_and_last_digit(&sum_digits);
	printf("\nEnter a number ");
	scanf(" %d",&no1);
	printf("\nEnter a number: ");
    scanf("%d", &no1);
    range_armstrong(&no1);
	printf("Enter a number ");
	scanf(" %d",&no1);
	printf("\nEnter a number and menu choice1)Even Odd\n2)Prime or not\n3)Palindrome\n4)Positive Negative\n5)Reverse\n6)Sum: ");
    scanf("%d%d", &no1, &no2);
    menu_driven(&no1, &no2);
    printf("\nEnter a number: ");
    scanf("%d", &no1);
    range_perfect_number(&no1);
    printf("\nEnter a number: ");
    scanf("%d", &no1);
    range_prime(&no1);
    printf("\nEnter a number: ");
    scanf("%d", &no1);
    range_strong_number(&no1);
    
	
	
	
	
	
}//main ends here

void sum(int* a,int* b){
	int c=*a+*b;
	printf("Sum: %d\n",c);
}

void area_circle(int* r){
	float area=3.14*(*r)*(*r);
	printf("Area of Circle: %.2f\n",area);
}

void fahrenheit(int* c){
	int fahren=(*c*9/5)+32;
	printf("Celsius to Fahrenheit: %d\n",fahren);
}

void swap_numbers(int* a,int* b){
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
	printf("After Swap- a:%d,b:%d\n",*a,*b);
}

void avg_of_numbers(int* a,int* b,int* c,int* d,int* e){
	float avg=(*a+*b+*c+*d+*e)/5.0;
	printf("Average: %.2f\n",avg);
}

void area_of_triangle(int* a,int* b){
	float area=0.5*(*a)*(*b);
	printf("Area of Triangle: %.2f\n",area);
}

void five_subject_percentage(int* a,int* b,int* c,int* d,int* e){
	int total_marks=*a+*b+*c+*d+*e;
	float percentage=(total_marks/500.0)*100;
	printf("Total: %d, Percentage: %.2f%%\n",total_marks,percentage);
}

void hours_to_min(int* m){
	int hour=*m/60;
	printf("%d min to hours: %d\n",*m,hour);
}

void length_breadth_perimeter(int* l,int* b){
	float perimeter=2*((*l)+(*b));
	printf("Perimeter of l:%d and b=%d is %.2f\n",*l,*b,perimeter);
}

void square_cube(int* a){
 	int sqr=(*a)*(*a),cube=(*a)*(*a)*(*a);
	printf("Square: %d and Cube: %d\n",sqr,cube);
}

void char_upper_or_lower(char* a){
	if(*a>='A'&&*a<='Z'){
		printf("Char is Upper Case");
	}
	else{
		printf("Char is Lower case\n");
	}
}

void palindrome(int* a){
	int temp,rev,r1,r2,r3,q1;
	temp=*a;
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

void vowel_or_not(char* a){
	if(*a=='A'||*a=='E'||*a=='I'||*a=='O'||*a=='U'||*a=='a'||*a=='e'||*a=='i'||*a=='o'||*a=='u'){
		printf("\nIts Vowel");
	}
	else{
		printf("\nIts Consonant");
	}
}

void leap_or_not(int* y){
	if((*y%4==0&&*y%100!=0)||(*y%400==0)){
		printf("\nIts Leap Year");
	}
	else{
		printf("Not a Leap Year");
	}
}

void vote_eligible(int* a){
	if(*a>=18){
		printf("\nEligible to vote");
	}
	else{
		printf("Not Eligible to vote");
	}
}

void accept_price(int* price,char* ch){
	int fprice;
	if(*ch=='y'){
		if(*price>=500){
			fprice=*price-*price*0.2;
			printf("\nDiscount is %d",fprice);
		}
		else{
			fprice=*price-*price*0.10;
			printf("\nDiscount is %d",fprice);
		}
	}
	else{
		if(*ch=='n'){
			if(*price>600){
				fprice=*price-*price*0.15;
				printf("\nDiscount is %d",fprice);
			}
			else{
				printf("\nNo Discount");
			}
		}
	}
}

void age_check(int* age){
	if(*age<12){
		printf("\nChild");
	}
	else if(*age>=12&&*age<=19){
		printf("\nTeenager");
	}
	else if(*age>=20&&*age<=59){
		printf("\nAdult");
	}
	else if(*age>=60){
		printf("\nSenior");
	}
}

void divisible_by_three_or_five(int* a){
	if(*a%3==0&&*a%5!=0){
		printf("\nno. is divisible by 3 not 5");
	}
	else if(*a%5==0&&*a%3!=0){
		printf("\nno. is divisible by 5 not by 3");
	}
	else if(*a%3==0&&*a%5==0){
		printf("\nno. divisible by both");
	}
}

void greatest_of_three(int* a,int* b,int* c){
	if(*a>*b&&*a>*c){
		printf("A is greater");
	}
	else if(*b>*c){
		printf("B is greater");
	}
	else{
		printf("C is greater");
	}
}

void marks_based_result(float *marks){
	if(*marks>=75){
		printf("Distinction");
	}
	else{
		if(*marks<75 && *marks>=65){
			printf("First Class");
		}
		else{
			if(*marks<65 && *marks>=55){
				printf("Second Class");
			}
			else{
				if(*marks<55 && *marks>=40){
					printf("Pass Class");
				}
				else{
					if(*marks<=40){
						printf("Fail");
					}
				}
			}
		}
	}
}

void three_side_triangle(int *t1,int *t2,int *t3){
	if(*t1==*t2 && *t1==*t3){
		printf("Equilateral Triangle");
	}
	else if(*t1==*t2 || *t1==*t3 || *t2==*t3){
		printf("Isosceles Triangle");
	}
	else{
		printf("Scalene");
	}
}

void two_no_operators(int *a,int *b,char *op){
	if(*op=='+'){
		printf("Addition is: %d",*a+*b);
	}
	else if(*op=='-'){
		printf("Substract is: %d",*a-*b);
	}
	else if(*op=='*'){
		printf("Multiply is: %d",*a**b);
	}
	else if(*op=='/'){
		printf("Division is: %d",*a/ *b);
	}
	else if(*op=='%'){
		printf("Mod is: %d",*a%*b);
	}
}

void print_numbers(int *i){
	while(*i<=9){
		*i = *i + 1;
		printf("\n %d ",*i);
	}
	printf("\n");
}

void tables(int *n){
	while(*n<=10){
		printf("%d \n",5*(*n));
		*n = *n + 1;
	}
}

void sum_to_five(int *n){
	int i=1,sum=0;
	while(i<=*n){
		sum+=i;
		i++;
	}
	printf("\nSum is %d from 1 to 5",sum);
}

void prime(int *n){
    int i=2;
    int is_prime=1; 
    while (i<=*n/2) {
        if (*n%i==0) {
            is_prime=0;
            break;
        }
        i++;
    }
    if (is_prime && *n>1) {
        printf("\nPrime");
    } else {
        printf("\nNot Prime");
    }
}

void armstrong(int *n){
	int temp=*n, rem, sum=0;
	while(temp>0){
		rem=temp%10;
		sum+=rem*rem*rem;
		temp/=10;
	}
	if(sum==*n){
		printf("\nArmstrong");
	}
	else{
		printf("\nNot Armstrong");
	}
}

void perfect(int *n){
	int sum=0;
	for(int i=1;i<*n;i++){
		if(*n%i==0){
			sum+=i;
		}
	}
	if(sum==*n){
		printf("\nPerfect Number");
	}
	else{
		printf("\nNot a Perfect number");
	}
}

void factorial(int *n){
	int fct=1;
	for(int i=1;i<=*n;i++){
		fct*=i;
	}
	printf("\nFactorial is %d",fct);
}

void strong_number(int *n){
	int temp=*n, sum=0, rem;
	while(temp>0){
		rem=temp%10;
		int fact=1;
		for(int i=1;i<=rem;i++){
			fact*=i;
		}
		sum+=fact;
		temp/=10;
	}
	if(sum==*n){
		printf("\nStrong Number");
	} else {
		printf("\nNot a Strong Number");
	}
}

void palindrome_three(int *n){
	int temp=*n, rev=0, rem;
	while(temp>0){
		rem=temp%10;
		rev=rev*10+rem;
		temp/=10;
	}
	if(rev==*n){
		printf("\nPalindrome");
	}else{
		printf("\nNot Palindrome");
	}
}

void sum_of_first_and_last_digit(int *n){
	int temp=*n;
	int first = temp;
	while(first>=10){
		first/=10;
	}
	int last = *n%10;
	printf("\nSum of first and last digit is: %d", first+last);
}

void range_armstrong(int *no){
	for(int num=1; num<=*no; num++){
		int temp=num, sum=0;
		int digits=0;
		while(temp>0){
			temp/=10;
			digits++;
		}
		temp=num;
		while(temp>0){
			int rem = temp%10;
			int res=1;
			for(int i=0;i<digits;i++){
				res*=rem;
			}
			sum+=res;
			temp/=10;
		}
		if(sum==num){
			printf("%d ",num);
		}
	}
}

void menu_driven(int *no,int *ch){
	if(*ch==1){
		printf("%s", (*no%2==0)?"Even":"Odd");
	}
	else if(*ch==2){
		int i=2, is_prime=1;
		while(i<=*no/2){
			if(*no%i==0){
				is_prime=0; break;
			}
			i++;
		}
		printf("%s", (is_prime && *no>1)?"Prime":"Not Prime");
	}
	else if(*ch==3){
		int temp=*no, rev=0, rem;
		while(temp>0){
			rem=temp%10;
			rev=rev*10+rem;
			temp/=10;
		}
		printf("%s", (rev==*no)?"Palindrome":"Not Palindrome");
	}
	else if(*ch==4){
		if(*no>0) printf("Positive");
		else if(*no<0) printf("Negative");
		else printf("Number is 0");
	}
	else if(*ch==5){
		int temp=*no, rev=0, rem;
		while(temp>0){
			rem=temp%10;
			rev=rev*10+rem;
			temp/=10;
		}
		printf("%d", rev);
	}
	else if(*ch==6){
		int temp=*no, sum=0, rem;
		while(temp>0){
			rem=temp%10;
			sum+=rem;
			temp/=10;
		}
		printf("%d", sum);
	}
}

void range_perfect_number(int *no){
	for(int i=1;i<=*no;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0) sum+=j;
		}
		if(sum==i) printf("%d ",i);
	}
}

void range_prime(int *no){
	for(int num=1; num<=*no; num++){
		int count=0;
		for(int i=1;i<=num;i++){
			if(num%i==0) count++;
		}
		if(count==2) printf("%d ",num);
	}
}

void range_strong_number(int *no){
	for(int num=1; num<=*no; num++){
		int temp=num, sum=0, rem;
		while(temp>0){
			rem=temp%10;
			int fact=1;
			for(int i=1;i<=rem;i++) fact*=i;
			sum+=fact;
			temp/=10;
		}
		if(sum==num) printf("%d ",num);
	}
}




 