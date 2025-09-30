#include<stdio.h>
void main(){
	char str[30];
	printf("Enter a string:");
	scanf("%s",str);
	int i=0,count=0;
	while(str[i]!='\0'){
		char ch = str[i];
		if(ch>='A' && ch<='Z') ch += 32;
		if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') count++;
		i++;
	}
	printf("Total number of vowels in the String: %s are: %d",str,count);
}