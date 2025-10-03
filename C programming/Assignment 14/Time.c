#include <stdio.h>
typedef struct Time{
    int hrs;
    int min;
    int sec;
}Time;
void store(Time*,int);
void display(Time*,int );
void main(){
    Time tarr[4];
    store(tarr,3);
    display(tarr,3);
}
void store(Time* tarr,int size){
    for(int i=0;i<size;i++){
        printf("Enter hours:");
        scanf("%d",&tarr[i].hrs);
        printf("Enter mins:");
        scanf("%d",&tarr[i].min);
        printf("Enter seconds:");
        scanf("%d",&tarr[i].sec);
    }
}
void display(Time* tarr,int size){
    for(int i=0;i<size;i++){
        printf("\n%d:%d:%d",tarr[i].hrs,tarr[i].min,tarr[i].sec);
    }
    
}