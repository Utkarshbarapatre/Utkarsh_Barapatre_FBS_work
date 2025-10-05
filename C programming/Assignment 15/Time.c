#include<stdio.h>

struct Time{
    int hrs;
    int min;
    int sec;
};

int toSeconds(struct Time t){
    return t.hrs*3600+t.min*60+t.sec;
}
int main(){
    struct Time t1,t2,sum;
    printf("Enter first time (hrs min sec):");
    scanf("%d%d%d",&t1.hrs,&t1.min,&t1.sec);
    printf("Enter second time (hrs min sec):");
    scanf("%d%d%d",&t2.hrs,&t2.min,&t2.sec);
    sum.sec=t1.sec+t2.sec;
    sum.min=t1.min+t2.min+sum.sec/60;
    sum.sec=sum.sec%60;
    sum.hrs=t1.hrs+t2.hrs+sum.min/60;
    sum.min=sum.min%60;
    printf("\nTime 1\n");
    printf("%d:%d:%d\n",t1.hrs,t1.min,t1.sec);
    printf("\nTime 2\n");
    printf("%d:%d:%d\n",t2.hrs,t2.min,t2.sec);
    printf("\nSum of Times\n");
    printf("%d:%d:%d\n",sum.hrs,sum.min,sum.sec);

    printf("\nTime 1 in seconds:%d\n",toSeconds(t1));
    printf("Time 2 in seconds:%d\n",toSeconds(t2));
    printf("Sum in seconds:%d\n",toSeconds(sum));

    return 0;
}
