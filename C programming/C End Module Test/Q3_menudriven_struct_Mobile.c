#include <stdio.h>
#include <string.h>
struct Mobile {
    int mid;
    char mname[30];
    float price;
    char brand[20];
};
void acceptMobile(struct Mobile *mob) {
    printf("Enter Mobile ID: ");
    scanf("%d",&mob->mid);
    printf("Enter Mobile Name: ");
    scanf(" %[^\n]",mob->mname);
    printf("Enter Mobile Price: ");
    scanf("%f",&mob->price);
    printf("Enter Mobile Brand: ");
    scanf(" %[^\n]",mob->brand);
}
void displayMobile(struct Mobile mob) {
    printf("\nMobile Details:\n");
    printf("ID: %d\n",mob.mid);
    printf("Name: %s\n",mob.mname);
    printf("Price: %.2f\n",mob.price);
    printf("Brand: %s\n",mob.brand);
}

int main() {
    struct Mobile mob;
    int choice;

    do {
        printf("\nMobile Menu\n1.Accept Mobile Details\n2.Display Mobile Details\n3.Exit\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                acceptMobile(&mob);
                break;
            case 2:
                displayMobile(mob);
                break;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("Invalid choice");
        }
    } while(choice!=3);

    return 0;
}
