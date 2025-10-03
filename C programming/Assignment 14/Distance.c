#include <stdio.h>
typedef struct Distance {
    int feet;
    float inch;
} Distance;
void store(Distance*, int);
void display(Distance*, int);

int main() {
    Distance arr[3];
    store(arr, 3);
    display(arr, 3);
    return 0;
}

void store(Distance* arr,int size) {
    for (int i=0;i<size;i++) {
        printf("Enter feet: ");
        scanf("%d", &arr[i].feet);
        printf("Enter inches: ");
        scanf("%f", &arr[i].inch);
    }
}
void display(Distance* arr,int size) {
    for (int i=0;i<size;i++) {
        printf("\nDistance %d: %d feet %.2f inches",i+1,arr[i].feet,arr[i].inch);
    }
}
