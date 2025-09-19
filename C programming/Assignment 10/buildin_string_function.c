#include<stdio.h>
#include<string.h>
int main(){
	char str[]="Firstbit";
	char str2[20];
	char str5[50]="Programming in C";
	strncpy(str2,str,7);
	printf("%s",str2);
	
	char str3[]="Wello";
    char str4[]="hello";
	printf("\n%d",strcmp(str3,str4));
	printf("\n%d",strlen(str3));
	strcat(str,str4);
	printf("\n%s",str);
	strcpy(str2,str3);
	printf("\n%s",str2);
	strncat(str2,str,7);
	printf("\n%s",str2);
	char *ptr=strchr(str2,'e');
	printf("\n%c", *ptr);
	printf("\n%s",strrchr(str2,'l'));
	printf("\n%s",strstr(str5,"C"));
	printf("\n%s",strpbrk(str5,"xyzC"));
	printf("\n%lu",strspn(str5,"Prog"));
	printf("\n%lu",strcspn(str5,"C"));
	char *dup=strdup(str3);
	printf("\n%s", dup);
}

