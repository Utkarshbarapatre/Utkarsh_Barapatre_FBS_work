#include<stdio.h>

void sum(int a[2]);
void area_circle(int r[1]);
void fahrenheit(int c[1]);
void swap_numbers(int ab[2]);
void avg_of_numbers(int arr[5]);
void area_of_triangle(int arr[2]);
void five_subject_percentage(int marks[5]);
void length_breadth_perimeter(int arr[2]);
void hours_to_min(int m[1]);
void square_cube(int a[1]);
void char_upper_or_lower(char a[1]);
void palindrome(int a[1]);
void vowel_or_not(char a[1]);
void leap_or_not(int y[1]);
void vote_eligible(int a[1]);
void accept_price(int arr[2]);  // arr[0]=price, arr[1]=char(y/n)
void age_check(int age[1]);
void divisible_by_three_or_five(int a[1]);
void greatest_of_three(int arr[3]);
void marks_based_result(float marks[1]);
void three_side_triangle(int arr[3]);
void two_no_operators(int arr[2],char op[1]);
void print_numbers(int start[1]);
void tables(int tab[1]);
void sum_to_five(int upto[1]);
void prime(int n[1]);
void armstrong(int n[1]);
void perfect(int n[1]);
void factorial(int n[1]);
void strong_number(int n[1]);
void palindrome_three(int n[1]);
void sum_of_first_and_last_digit(int n[1]);
void range_armstrong(int n[1]);
void menu_driven(int arr[2]); // arr[0]=num, arr[1]=choice
void range_perfect_number(int n[1]);
void range_prime(int n[1]);
void range_strong_number(int n[1]);

void main(){
    int arr2[2],arr3[3],arr5[5],one[1];
    float f1[1];
    char ch[1];
    arr2[0]=10; arr2[1]=20;
    sum(arr2);
    one[0]=2;
    area_circle(one);
    one[0]=46;
    fahrenheit(one);
    arr2[0]=5; arr2[1]=9;
    swap_numbers(arr2);
    arr5[0]=6;arr5[1]=12;arr5[2]=2;arr5[3]=3;arr5[4]=8;
    avg_of_numbers(arr5);
    arr2[0]=10;arr2[1]=15;
    area_of_triangle(arr2);
    arr5[0]=45;arr5[1]=78;arr5[2]=44;arr5[3]=79;arr5[4]=80;
    five_subject_percentage(arr5);
    one[0]=260;
    hours_to_min(one);
    arr2[0]=30;arr2[1]=60;
    length_breadth_perimeter(arr2);
    one[0]=7;
    square_cube(one);
    ch[0]='A';
    char_upper_or_lower(ch);
    one[0]=121;
    palindrome(one);
    ch[0]='e';
    vowel_or_not(ch);
    one[0]=2004;
    leap_or_not(one);
    one[0]=20;
    vote_eligible(one);
    arr2[0]=700; arr2[1]='y';
    accept_price(arr2);
    one[0]=65;
    age_check(one);
    one[0]=15;
    divisible_by_three_or_five(one);
    arr3[0]=12;arr3[1]=7;arr3[2]=9;
    greatest_of_three(arr3);
    f1[0]=72.5;
    marks_based_result(f1);
    arr3[0]=3;arr3[1]=3;arr3[2]=3;
    three_side_triangle(arr3);
    arr2[0]=15;arr2[1]=5; ch[0]='+';
    two_no_operators(arr2,ch);
    one[0]=0;
    print_numbers(one);
    one[0]=1;
    tables(one);
    one[0]=5;
    sum_to_five(one);
    one[0]=7;
    prime(one);
    one[0]=153;
    armstrong(one);
    one[0]=28;
    perfect(one);
    one[0]=5;
    factorial(one);
    one[0]=145;
    strong_number(one);
    one[0]=121;
    palindrome_three(one);
    one[0]=12345;
    sum_of_first_and_last_digit(one);
    one[0]=500;
    range_armstrong(one);
    arr2[0]=121;arr2[1]=2;
    menu_driven(arr2);
    one[0]=500;
    range_perfect_number(one);
    one[0]=30;
    range_prime(one);
    one[0]=500;
    range_strong_number(one);
}

void sum(int a[2]){
    printf("Sum: %d\n",a[0]+a[1]);
}

void area_circle(int r[1]){
    printf("Area of Circle: %.2f\n",3.14*r[0]*r[0]);
}

void fahrenheit(int c[1]){
    printf("Celsius to Fahrenheit: %d\n",(c[0]*9/5)+32);
}

void swap_numbers(int ab[2]){
    int temp=ab[0];
    ab[0]=ab[1];
    ab[1]=temp;
    printf("After Swap- a:%d,b:%d\n",ab[0],ab[1]);
}

void avg_of_numbers(int arr[5]){
    float avg=(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5.0;
    printf("Average: %.2f\n",avg);
}

void area_of_triangle(int arr[2]){
    printf("Area of Triangle: %.2f\n",0.5*arr[0]*arr[1]);
}

void five_subject_percentage(int marks[5]){
    int total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    printf("Total: %d, Percentage: %.2f%%\n",total,(total/500.0)*100);
}

void hours_to_min(int m[1]){
    printf("%d min to hours: %d\n",m[0],m[0]/60);
}

void length_breadth_perimeter(int arr[2]){
    printf("Perimeter: %.2f\n",2.0*(arr[0]+arr[1]));
}

void square_cube(int a[1]){
    printf("Square: %d, Cube: %d\n",a[0]*a[0],a[0]*a[0]*a[0]);
}

void char_upper_or_lower(char a[1]){
    if(a[0]>='A'&&a[0]<='Z') printf("Uppercase\n");
    else printf("Lowercase\n");
}

void palindrome(int a[1]){
    int temp=a[0],rev=0;
    while(temp>0){rev=rev*10+temp%10; temp/=10;}
    printf("%s\n",(rev==a[0])?"Palindrome":"Not Palindrome");
}

void vowel_or_not(char a[1]){
    if(a[0]=='A'||a[0]=='E'||a[0]=='I'||a[0]=='O'||a[0]=='U'||
       a[0]=='a'||a[0]=='e'||a[0]=='i'||a[0]=='o'||a[0]=='u'){
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }
}

void leap_or_not(int y[1]){
    if((y[0]%4==0&&y[0]%100!=0)||y[0]%400==0) printf("Leap Year\n");
    else printf("Not Leap Year\n");
}

void vote_eligible(int a[1]){
    if(a[0]>=18) printf("Eligible to Vote\n");
    else printf("Not Eligible\n");
}

void accept_price(int arr[2]){
    int price=arr[0]; char ch=arr[1];
    if(ch=='y'){
        if(price>=500) printf("Discount %d\n",price-price*0.2);
        else printf("Discount %d\n",price-price*0.1);
    }else if(ch=='n'){
        if(price>600) printf("Discount %d\n",price-price*0.15);
        else printf("No Discount\n");
    }
}

void age_check(int age[1]){
    if(age[0]<12) printf("Child\n");
    else if(age[0]<=19) printf("Teenager\n");
    else if(age[0]<=59) printf("Adult\n");
    else printf("Senior\n");
}

void divisible_by_three_or_five(int a[1]){
    if(a[0]%3==0&&a[0]%5!=0) printf("Divisible by 3 only\n");
    else if(a[0]%5==0&&a[0]%3!=0) printf("Divisible by 5 only\n");
    else if(a[0]%3==0&&a[0]%5==0) printf("Divisible by both\n");
    else printf("Not divisible\n");
}

void greatest_of_three(int arr[3]){
    if(arr[0]>arr[1]&&arr[0]>arr[2]) printf("A greater\n");
    else if(arr[1]>arr[2]) printf("B greater\n");
    else printf("C greater\n");
}

void marks_based_result(float marks[1]){
    if(marks[0]>=75) printf("Distinction\n");
    else if(marks[0]>=65) printf("First Class\n");
    else if(marks[0]>=55) printf("Second Class\n");
    else if(marks[0]>=40) printf("Pass Class\n");
    else printf("Fail\n");
}

void three_side_triangle(int arr[3]){
    if(arr[0]==arr[1]&&arr[1]==arr[2]) printf("Equilateral\n");
    else if(arr[0]==arr[1]||arr[1]==arr[2]||arr[0]==arr[2]) printf("Isosceles\n");
    else printf("Scalene\n");
}

void two_no_operators(int arr[2],char op[1]){
    if(op[0]=='+') printf("Addition: %d\n",arr[0]+arr[1]);
    else if(op[0]=='-') printf("Subtraction: %d\n",arr[0]-arr[1]);
    else if(op[0]=='*') printf("Multiply: %d\n",arr[0]*arr[1]);
    else if(op[0]=='/') printf("Division: %d\n",arr[0]/arr[1]);
    else if(op[0]=='%') printf("Mod: %d\n",arr[0]%arr[1]);
}

void print_numbers(int start[1]){
    while(start[0]<=9){ printf("%d ",start[0]); start[0]++; }
    printf("\n");
}

void tables(int tab[1]){
    while(tab[0]<=10){ printf("%d\n",5*tab[0]); tab[0]++; }
}

void sum_to_five(int upto[1]){
    int sum=0;
    for(int i=1;i<=upto[0];i++) sum+=i;
    printf("Sum: %d\n",sum);
}

void prime(int n[1]){
    int is_prime=1;
    for(int i=2;i<=n[0]/2;i++){ if(n[0]%i==0){is_prime=0; break;} }
    printf("%s\n",(is_prime&&n[0]>1)?"Prime":"Not Prime");
}

void armstrong(int n[1]){
    int temp=n[0],sum=0;
    while(temp>0){int r=temp%10; sum+=r*r*r; temp/=10;}
    printf("%s\n",(sum==n[0])?"Armstrong":"Not Armstrong");
}

void perfect(int n[1]){
    int sum=0;
    for(int i=1;i<n[0];i++) if(n[0]%i==0) sum+=i;
    printf("%s\n",(sum==n[0])?"Perfect":"Not Perfect");
}

void factorial(int n[1]){
    int fact=1;
    for(int i=1;i<=n[0];i++) fact*=i;
    printf("Factorial: %d\n",fact);
}

void strong_number(int n[1]){
    int temp=n[0],sum=0;
    while(temp>0){
        int r=temp%10,f=1;
        for(int i=1;i<=r;i++) f*=i;
        sum+=f; temp/=10;
    }
    printf("%s\n",(sum==n[0])?"Strong":"Not Strong");
}

void palindrome_three(int n[1]){
    int temp=n[0],rev=0;
    while(temp>0){rev=rev*10+temp%10; temp/=10;}
    printf("%s\n",(rev==n[0])?"Palindrome":"Not Palindrome");
}

void sum_of_first_and_last_digit(int n[1]){
    int last=n[0]%10,first=n[0];
    while(first>=10) first/=10;
    printf("Sum of first and last: %d\n",first+last);
}

void range_armstrong(int n[1]){
    for(int num=1;num<=n[0];num++){
        int temp=num,sum=0,d=0;
        while(temp>0){temp/=10; d++;}
        temp=num;
        while(temp>0){int r=temp%10,p=1; for(int i=0;i<d;i++) p*=r; sum+=p; temp/=10;}
        if(sum==num) printf("%d ",num);
    }
    printf("\n");
}

void menu_driven(int arr[2]){
    int no=arr[0],ch=arr[1];
    if(ch==1) printf("%s\n",(no%2==0)?"Even":"Odd");
    else if(ch==2){
        int is_prime=1;
        for(int i=2;i<=no/2;i++){if(no%i==0){is_prime=0; break;}}
        printf("%s\n",(is_prime&&no>1)?"Prime":"Not Prime");
    }else if(ch==3){
        int temp=no,rev=0;
        while(temp>0){rev=rev*10+temp%10; temp/=10;}
        printf("%s\n",(rev==no)?"Palindrome":"Not Palindrome");
    }
}

void range_perfect_number(int n[1]){
    for(int i=1;i<=n[0];i++){
        int sum=0;
        for(int j=1;j<i;j++) if(i%j==0) sum+=j;
        if(sum==i) printf("%d ",i);
    }
    printf("\n");
}

void range_prime(int n[1]){
    for(int num=2;num<=n[0];num++){
        int cnt=0;
        for(int i=1;i<=num;i++) if(num%i==0) cnt++;
        if(cnt==2) printf("%d ",num);
    }
    printf("\n");
}

void range_strong_number(int n[1]){
    for(int num=1;num<=n[0];num++){
        int temp=num,sum=0;
        while(temp>0){
            int r=temp%10,f=1;
            for(int i=1;i<=r;i++) f*=i;
            sum+=f; temp/=10;
        }
        if(sum==num) printf("%d ",num);
    }
    printf("\n");
}
