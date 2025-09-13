#include<stdio.h>
void electricity_bill(int*units){
    int bill=0;
    if(*units<=50){
        bill=*units*30;
    }
    else if(*units<=150){
        bill=50*30+(*units-50)*40;
    }
    else{
        bill=50*30+100*40+(*units-150)*50;
    }
    printf("Electricity bill for %d units is: %d Rs\n",*units,bill);
}
int main(){
    int units;
    printf("Enter number of units:");
    scanf("%d",&units);
    electricity_bill(&units);
    return 0;
}
