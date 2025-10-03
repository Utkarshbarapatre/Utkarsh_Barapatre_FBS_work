#include <stdio.h>
typedef struct Product{
    int id;
    char name[30];
    int quantity;
    float price;
}Product;
void store(Product*,int);
void display(Product*,int);
void main(){
    Product arr[30];
    store(arr,3);
    display(arr,3);
}
void store(Product* arr,int size){
    for(int i=0;i<size;i++){
        printf("Enter ID:");
        scanf("%d",&arr[i].id);
        printf("Enter Name:");
        scanf("%s",&arr[i].name);
        printf("Enter quantity:");
        scanf("%d",&arr[i].quantity);
        printf("Enter price:");
        scanf("%f",&arr[i].price);
    }
}
void display(Product* arr,int size){
    for(int i=0;i<size;i++){
        printf("\nID: %d Name: %s Quantity: %d Price: %.2f",arr[i].id,arr[i].name,arr[i].quantity,arr[i].price);
    }
    
}