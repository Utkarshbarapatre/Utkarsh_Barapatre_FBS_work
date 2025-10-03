#include <stdio.h>
typedef struct Employee{
    int id;
    char name[30];
    int salary;
}Employee;
void store(Employee*,int);
void display(Employee*,int);
void main(){
    Employee arr[30];
    store(arr,3);
    display(arr,3);
}
void store(Employee* arr,int size){
    for(int i=0;i<size;i++){
        printf("Enter ID:");
        scanf("%d",&arr[i].id);
        printf("Enter Name:");
        scanf("%s",&arr[i].name);
        printf("Enter salary:");
        scanf("%d",&arr[i].salary);
    }
}
void display(Employee* arr,int size){
    for(int i=0;i<size;i++){
        printf("\nID: %d Name: %s salary: %d",arr[i].id,arr[i].name,arr[i].salary);
    }
    
}