#include <stdio.h>

void findRanks(int leaderboard[], int n, int gameScores[], int m) {
    int ranks[n];
    ranks[0] = 1;
    for (int i = 1; i < n; i++) {
        if (leaderboard[i] == leaderboard[i - 1]) {
            ranks[i] = ranks[i - 1];
        } else {
            ranks[i] = ranks[i - 1] + 1;
        }
    }
    for (int i = 0; i < m; i++) {
        int rank = ranks[n - 1] + 1; 
        for (int j = 0; j < n; j++) {
            if (gameScores[i] >= leaderboard[j]) {
                rank = ranks[j];
                break;
            }
        }
        printf("Game Score %d -> Rank %d\n", gameScores[i], rank);
    }
}

int main() {
    int n, m;
    printf("Enter the number of leaderboard scores: ");
    scanf("%d", &n);
    int leaderboard[n];
    printf("Enter the leaderboard scores (descending):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }
    printf("Enter the number of game scores: ");
    scanf("%d", &m);
    int gameScores[m];
    printf("Enter your game scores (ascending):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &gameScores[i]);
    }
    findRanks(leaderboard, n, gameScores, m);
    return 0;
}