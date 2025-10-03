#include <stdio.h>
typedef struct Student{
    int rollno;
    char name[30];
    int marks;
}Student;

void main(){
    Student arr[30];
    store(arr,3);
    display(arr,3);
}
void store(Student* arr,int size){
    for(int i=0;i<size;i++){
        printf("Enter roll number:");
        scanf("%d",&arr[i].rollno);
        printf("Enter Name:");
        scanf("%s",&arr[i].name);
        printf("Enter Marks:");
        scanf("%d",&arr[i].marks);
    }
}
void display(Student* arr,int size){
    for(int i=0;i<size;i++){
        printf("\nRoll no: %d Name: %s Marks:%d",arr[i].rollno,arr[i].name,arr[i].marks);
    }
    
}