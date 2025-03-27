void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int uniqueRanks[20000];
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            uniqueRanks[uniqueCount++] = ranked[i];
        }
    }

    int rankIndex = uniqueCount - 1;

    for (int i = 0; i < m; i++) {
        while (rankIndex >= 0 && player[i] >= uniqueRanks[rankIndex]) {
            rankIndex--;
        }
        result[i] = rankIndex + 2;
    }
}