#include<stdio.h>
#include<string.h>

struct Player{
    char name[50];
    int matches;
    int runs;
    int wickets;
};

void accept(struct Player p[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nEnter name of player %d:",i+1);
        scanf(" %[^\n]",p[i].name);
        printf("Enter matches played:");
        scanf("%d",&p[i].matches);
        printf("Enter runs:");
        scanf("%d",&p[i].runs);
        printf("Enter wickets:");
        scanf("%d",&p[i].wickets);
    }
}

void display(struct Player p[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nName:%s\n",p[i].name);
        printf("Matches:%d\n",p[i].matches);
        printf("Runs:%d\n",p[i].runs);
        printf("Wickets:%d\n",p[i].wickets);
    }
}

void maxStats(struct Player p[],int n){
    int i,maxRunIdx=0,maxWicketIdx=0;
    for(i=1;i<n;i++){
        if(p[i].runs>p[maxRunIdx].runs)maxRunIdx=i;
        if(p[i].wickets>p[maxWicketIdx].wickets)maxWicketIdx=i;
    }
    printf("\nPlayer with maximum runs:\n");
    printf("Name:%s\nRuns:%d\n",p[maxRunIdx].name,p[maxRunIdx].runs);
    printf("\nPlayer with maximum wickets:\n");
    printf("Name:%s\nWickets:%d\n",p[maxWicketIdx].name,p[maxWicketIdx].wickets);
}

int main(){
    struct Player players[10];
    accept(players,10);
    display(players,10);
    maxStats(players,10);
    return 0;
}
