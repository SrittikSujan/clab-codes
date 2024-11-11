#include <stdio.h>

int main() {
    
    int y;
    printf("\n");
    printf("Enter the number of cities:\n"); // Number of rows
    scanf("%d", &y);
    printf("\n");

    char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    char city[y][20];
    for (int i = 0; i < y; i++) {
        printf("Enter the name of city no. %d: ", i + 1);
        scanf("%s", city[i]);
    }
    printf("\n\n");

    int temperature[y][7];
    for (int i = 0; i < y; i++) {
        printf("Enter the temperatures for %s:\n", city[i]);
        for (int j = 0; j < 7; j++) {
            printf("At %s: ", days[j]);
            scanf("%d", &temperature[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < y; i++) {
        printf("\nThe temperatures for %s are:\n", city[i]);
        for (int j = 0; j < 7; j++) {
            printf("%s: %d Degree C\n", days[j], temperature[i][j]);
        }
    }
    printf("\n");

    return 0;
}