#include<stdio.h>

typedef struct Admin{
    int id;
    char name[30];
    float salary;
    float allowance;
}Admin;

void store(Admin*,int);
void display(Admin*,int);

int main(){
    Admin arr[3];
    store(arr,3);
    display(arr,3);
    return 0;
}

void store(Admin*arr,int size){
    for(int i=0;i<size;i++){
        printf("Enter ID:");
        scanf("%d",&arr[i].id);
        printf("Enter Name:");
        scanf("%s",arr[i].name);
        printf("Enter Salary:");
        scanf("%f",&arr[i].salary);
        printf("Enter Allowance:");
        scanf("%f",&arr[i].allowance);
    }
}

void display(Admin*arr,int size){
    for(int i=0;i<size;i++){
        printf("\nID:%d|Name:%s|Salary:%.2f|Allowance:%.2f",arr[i].id,arr[i].name,arr[i].salary,arr[i].allowance);
    }
}
