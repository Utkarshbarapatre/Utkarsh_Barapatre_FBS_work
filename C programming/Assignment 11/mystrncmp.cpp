#include<stdio.h>
int mystrncmp(char*,char*,int);
int main(){
	char str1[30],str2[30];
	int n;
	char ch;
	printf("Enter a string 1 ");
	scanf("%s",&str1);
	printf("Enter a string 2 ");
	scanf("%s",&str2);
	printf("Enter number you want to compare ");
	scanf("%d", &n);
	int res=mystrncmp(str1,str2,n);
	if(res==0){
		printf("First %d characters of string are equal");
	}
	else if(res==1){
		printf("First %d characters of string are not equal");
	}
	else{
		printf("S1 is greater than S2");
	}
	
}
int mystrncmp(char* str1,char* str2,int n){
	int i=0;
	int sum1=0,sum2=0;
	while(i<n){
		sum1=sum1+str1[i];
		i++;
	}
	i=0;
	while(i<n){
		sum2=sum2+str2[i];
		i++;
	}
	if(sum1==sum2){
		return 0;
	}
	else if(sum1>sum2){
		return 1;
		
	}
	return -1;

}