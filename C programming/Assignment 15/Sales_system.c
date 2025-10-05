#include<stdio.h>
#include<string.h>

struct Product{
    char name[50];
    float price;
    int qty;
};

int main(){
    struct Product cart[50];
    int n,i;
    float total=0;

    printf("Enter number of products:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter product name:");
        scanf(" %[^\n]",cart[i].name);
        printf("Enter price:");
        scanf("%f",&cart[i].price);
        printf("Enter quantity:");
        scanf("%d",&cart[i].qty);
    }

    printf("\n---Cart Details---\n");
    for(i=0;i<n;i++){
        float cost=cart[i].price*cart[i].qty;
        total+=cost;
        printf("Product:%s Price:%.2f Qty:%d Cost:%.2f\n",cart[i].name,cart[i].price,cart[i].qty,cost);
    }

    printf("\nTotal Amount:%.2f\n",total);
    return 0;
}
