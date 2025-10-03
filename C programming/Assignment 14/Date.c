#include <stdio.h>
typedef struct Date{
    int day;
    int month;
    int year;
}Date;
void store(Date*,int);
void display(Date*,int );
void main(){
    Date tarr[4];
    store(tarr,3);
    display(tarr,3);
}
void store(Date* tarr,int size){
    for(int i=0;i<size;i++){
        printf("Enter day:");
        scanf("%d",&tarr[i].day);
        printf("Enter month:");
        scanf("%d",&tarr[i].month);
        printf("Enter year:");
        scanf("%d",&tarr[i].year);
    }
}
void display(Date* tarr,int size){
    for(int i=0;i<size;i++){
        printf("\n%d/%d/%d",tarr[i].day,tarr[i].month,tarr[i].year);
    }
    
}