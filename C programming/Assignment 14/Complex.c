#include <stdio.h>
typedef struct Complex {
    float real;
    float imaginary;
} Complex;
void store(Complex*,int);
void display(Complex*, int);

int main() {
    Complex arr[3];
    store(arr, 3);
    display(arr, 3);
    return 0;
}
void store(Complex* arr,int size) {
    for (int i=0;i<size;i++) {
        printf("Enter real part: ");
        scanf("%f",&arr[i].real);
        printf("Enter imaginary part: ");
        scanf("%f",&arr[i].imaginary);
    }
}

void display(Complex* arr, int size) {
    for (int i=0;is<size;i++) {
        printf("\nComplex %d: %.2f + %.2fi",i+1,arr[i].real,arr[i].imaginary);
    }
}
