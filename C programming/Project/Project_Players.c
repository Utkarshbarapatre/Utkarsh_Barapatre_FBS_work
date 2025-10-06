#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cricketer {
    int jersey;
    char playerName[50];
    int totalRuns;
    int totalWickets;
    int totalMatches;
};

struct Cricketer *team = NULL;
int totalPlayers = 0;

void addCricketer() {
    team = realloc(team, (totalPlayers + 1) * sizeof(struct Cricketer));
    if (!team) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("Enter Jersey Number: ");
    scanf("%d", &team[totalPlayers].jersey);
    printf("Enter Name: ");
    scanf(" %[^\n]", team[totalPlayers].playerName);
    printf("Enter Runs: ");
    scanf("%d", &team[totalPlayers].totalRuns);
    printf("Enter Wickets: ");
    scanf("%d", &team[totalPlayers].totalWickets);
    printf("Enter Matches Played: ");
    scanf("%d", &team[totalPlayers].totalMatches);
    totalPlayers++;
    printf("Cricketer added!\n");
}

// Remove player
void removeCricketer() {
    int jno;
    printf("Enter Jersey Number to remove: ");
    scanf("%d", &jno);

    for (int i = 0; i < totalPlayers; i++) {
        if (team[i].jersey == jno) {
            for (int j = i; j < totalPlayers - 1; j++) {
                team[j] = team[j + 1];
            }
            totalPlayers--;
            team = realloc(team, totalPlayers * sizeof(struct Cricketer));
            printf("Cricketer removed.\n");
            return;
        }
    }
    printf("Not found.\n");
}

// Search player
void searchCricketer() {
    int opt;
    printf("Search by:\n1. Jersey Number\n2. Name\nEnter choice: ");
    scanf("%d", &opt);

    if (opt == 1) {
        int jno;
        printf("Enter Jersey Number: ");
        scanf("%d", &jno);
        for (int i = 0; i < totalPlayers; i++) {
            if (team[i].jersey == jno) {
                printf("Found: %s | Runs: %d | Wickets: %d | Matches: %d\n",
                       team[i].playerName, team[i].totalRuns, team[i].totalWickets, team[i].totalMatches);
                return;
            }
        }
    } else {
        char searchNm[50];
        printf("Enter Name: ");
        scanf(" %[^\n]", searchNm);
        for (int i = 0; i < totalPlayers; i++) {
            if (strcmp(team[i].playerName, searchNm) == 0) {
                printf("Found: Jersey: %d | Runs: %d | Wickets: %d | Matches: %d\n",
                       team[i].jersey, team[i].totalRuns, team[i].totalWickets, team[i].totalMatches);
                return;
            }
        }
    }
    printf("Cricketer not found.\n");
}

// Update player data
void updateCricketer() {
    int jno;
    printf("Enter Jersey Number to update: ");
    scanf("%d", &jno);
    for (int i = 0; i < totalPlayers; i++) {
        if (team[i].jersey == jno) {
            printf("Enter new Runs: ");
            scanf("%d", &team[i].totalRuns);
            printf("Enter new Wickets: ");
            scanf("%d", &team[i].totalWickets);
            printf("Enter new Matches Played: ");
            scanf("%d", &team[i].totalMatches);
            printf("Updated successfully.\n");
            return;
        }
    }
    printf("Cricketer not found.\n");
}

// Display all
void showAll() {
    if (totalPlayers == 0) {
        printf("No records.\n");
        return;
    }
    for (int i = 0; i < totalPlayers; i++) {
        printf("%d. Jersey: %d | Name: %s | Runs: %d | Wickets: %d | Matches: %d\n",
               i + 1, team[i].jersey, team[i].playerName,
               team[i].totalRuns, team[i].totalWickets, team[i].totalMatches);
    }
}

// Sort helper
void sortCricketers(int flag, int asc) {
    for (int i = 0; i < totalPlayers - 1; i++) {
        for (int j = i + 1; j < totalPlayers; j++) {
            int val1 = (flag == 1) ? team[i].totalRuns : team[i].totalWickets;
            int val2 = (flag == 1) ? team[j].totalRuns : team[j].totalWickets;
            if ((asc && val1 > val2) || (!asc && val1 < val2)) {
                struct Cricketer temp = team[i];
                team[i] = team[j];
                team[j] = temp;
            }
        }
    }
    showAll();
}

// Top 3
void topThree(int flag) {
    sortCricketers(flag, 0);
    printf("Top 3 by %s:\n", flag == 1 ? "Runs" : "Wickets");
    for (int i = 0; i < totalPlayers && i < 3; i++) {
        printf("%d. %s | Runs: %d | Wickets: %d\n", i + 1,
               team[i].playerName, team[i].totalRuns, team[i].totalWickets);
    }
}

// Add three static players
void addStaticPlayers() {
    team = realloc(team, 3 * sizeof(struct Cricketer));
    team[0].jersey = 7; strcpy(team[0].playerName, "Virat Kohli"); team[0].totalRuns = 12000; team[0].totalWickets = 4; team[0].totalMatches = 250;
    team[1].jersey = 18; strcpy(team[1].playerName, "MS Dhoni"); team[1].totalRuns = 10500; team[1].totalWickets = 1; team[1].totalMatches = 350;
    team[2].jersey = 45; strcpy(team[2].playerName, "Rohit Sharma"); team[2].totalRuns = 9000; team[2].totalWickets = 8; team[2].totalMatches = 220;
    totalPlayers = 3;
}

// Menu
void menu() {
    int ch;
    do {
        printf("\n--- Cricketer Management ---\n");
        printf("1. Add\n");
        printf("2. Remove\n");
        printf("3. Search\n");
        printf("4. Update\n");
        printf("5. Display All\n");
        printf("6. Sort by Runs\n");
        printf("7. Sort by Wickets\n");
        printf("8. Top 3 Runs\n");
        printf("9. Top 3 Wickets\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: addCricketer(); break;
            case 2: removeCricketer(); break;
            case 3: searchCricketer(); break;
            case 4: updateCricketer(); break;
            case 5: showAll(); break;
            case 6: sortCricketers(1, 0); break;
            case 7: sortCricketers(2, 0); break;
            case 8: topThree(1); break;
            case 9: topThree(2); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (ch != 0);
}

int main() {
    addStaticPlayers(); // Add 3 predefined players
    menu();
    free(team);
    return 0;
}
