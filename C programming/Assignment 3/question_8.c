#include <stdio.h>
int main() {
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
        printf("Strong Number");
    } else {
        printf("Not a Strong Number");
    }
}
