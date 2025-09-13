#include<stdio.h>
void check_number(int*num){
    if(*num>0){
        printf("Number is Positive\n");
    }
    else if(*num<0){
        printf("Number is Negative\n");
    }
    else{
        printf("Number is Neutral (0)\n");
    }
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    check_number(&num);
    return 0;
}
