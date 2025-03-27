#include <stdio.h>

void deflateBalloons(int air[], int n) {
    int remaining = n; // Number of balloons with air

    while (remaining > 0) {
        printf("%d\n", remaining); // Print the number of balloons with air

        // Find the smallest nonzero air level
        int min_air = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < min_air) {
                min_air = air[i];
            }
        }

        // Reduce air by the found minimum and update remaining count
        remaining = 0;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min_air;
                if (air[i] > 0) {
                    remaining++;
                }
            }
        }
    }
}
