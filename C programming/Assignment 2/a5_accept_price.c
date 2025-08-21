#include<stdio.h>
void main(){
	int price,fprice;
	char ch;
	printf("Enter Price ");
	scanf(" %d",&price);
	printf("Enter whether you are student y or n: ");
	scanf(" %c",&ch);
	if(ch=='y'){
		if(price>=500){
			fprice=price-price*0.2;
			printf(" Discount is %d",fprice);
		}
		else{
			fprice=price-price*0.10;
			printf(" Discount is %d",fprice);
		}
	}
	else{
		if(ch=='n'){
			if(price>600){
				fprice=price-price*0.15;
				printf(" Discount is %d",fprice);
				
			}
			else{
				printf("No Discount");
			}
		}
	}
}