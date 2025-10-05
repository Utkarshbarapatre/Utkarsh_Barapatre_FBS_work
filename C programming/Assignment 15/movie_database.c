#include<stdio.h>
#include<string.h>

struct Movie{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

void addMovies(struct Movie m[],int *n){
    printf("Enter number of movies to add:");
    int count,i;
    scanf("%d",&count);
    for(i=0;i<count;i++){
        printf("\nEnter title:");
        scanf(" %[^\n]",m[*n].title);
        printf("Enter director:");
        scanf(" %[^\n]",m[*n].director);
        printf("Enter release year:");
        scanf("%d",&m[*n].year);
        printf("Enter genre:");
        scanf(" %[^\n]",m[*n].genre);
        (*n)++;
    }
}

void searchMovie(struct Movie m[],int n){
    char key[50];
    int i,found=0;
    printf("Enter movie title to search:");
    scanf(" %[^\n]",key);
    for(i=0;i<n;i++){
        if(strcmp(m[i].title,key)==0){
            printf("\nTitle:%s\nDirector:%s\nYear:%d\nGenre:%s\n",m[i].title,m[i].director,m[i].year,m[i].genre);
            found=1;
            break;
        }
    }
    if(!found)printf("\nMovie not found.\n");
}

void updateMovie(struct Movie m[],int n){
    char key[50];
    int i,found=0;
    printf("Enter movie title to update:");
    scanf(" %[^\n]",key);
    for(i=0;i<n;i++){
        if(strcmp(m[i].title,key)==0){
            printf("\nEnter new director:");
            scanf(" %[^\n]",m[i].director);
            printf("Enter new release year:");
            scanf("%d",&m[i].year);
            printf("Enter new genre:");
            scanf(" %[^\n]",m[i].genre);
            printf("\nMovie updated successfully.\n");
            found=1;
            break;
        }
    }
    if(!found)printf("\nMovie not found.\n");
}

int main(){
    struct Movie movies[100];
    int n=0,choice;
    do{
        printf("\n1.Add Movie\n2.Search Movie\n3.Update Movie\n4.Exit\nEnter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:addMovies(movies,&n);break;
            case 2:searchMovie(movies,n);break;
            case 3:updateMovie(movies,n);break;
            case 4:printf("\nExiting...\n");break;
            default:printf("\nInvalid choice.\n");
        }
    }while(choice!=4);
    return 0;
}
 