#include <stdio.h>

int main() {
    char arr[100];
    int i, j, count;
    printf("Enter a string: ");
    scanf("%s",arr);
    printf("Character frequency:\n");
    for(i=0;arr[i]!='\0';i++) {
        count=1;
        if(arr[i]=='0')
            continue;
        for(j=i+1;arr[j]!='\0';j++) {
            if(arr[i]==arr[j]) {
                count++;
                arr[j]='0';
            }
        }
        if(arr[i]!='0'&&arr[i]!=' ')
            printf("%c - %d\n",arr[i],count);
    }

    return 0;
}
