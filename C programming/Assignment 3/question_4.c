#include <stdio.h>
int main() {
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
        printf("Prime");
    } else {
        printf("Not Prime");
    }
}
