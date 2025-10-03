#include<stdio.h>

typedef struct SalesManager{
    int id;
    char name[30];
    float salary;
    float incentive;
    float target;
}SalesManager;

void store(SalesManager*,int);
void display(SalesManager*,int);

int main(){
    SalesManager arr[3];
    store(arr,3);
    display(arr,3);
    return 0;
}

void store(SalesManager*arr,int size){
    for(int i=0;i<size;i++){
        printf("Enter ID:");
        scanf("%d",&arr[i].id);
        printf("Enter Name:");
        scanf("%s",arr[i].name);
        printf("Enter Salary:");
        scanf("%f",&arr[i].salary);
        printf("Enter Incentive:");
        scanf("%f",&arr[i].incentive);
        printf("Enter Target:");
        scanf("%f",&arr[i].target);
    }
}

void display(SalesManager*arr,int size){
    for(int i=0;i<size;i++){
        printf("\nID:%d|Name:%s|Salary:%.2f|Incentive:%.2f|Target:%.2f",arr[i].id,arr[i].name,arr[i].salary,arr[i].incentive,arr[i].target);
    }
}
