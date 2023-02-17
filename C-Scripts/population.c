#include <stdio.h>

int main() {
    int start_population, end_population, n_years = 0;

    // Prompt the user for the starting and end populations
    do {
        printf("Enter the starting population (must be greater than 9): ");
        scanf("%d", &start_population);
    } while (start_population <= 9);

    printf("Enter the end population: ");
    scanf("%d", &end_population);

    // Calculate the number of years it takes to reach the end population from the starting population
    int n = start_population;
    while (n < end_population) {
        n += n/3 - n/4;
        n_years++;
    }

    // Print the result
    printf("It takes %d years to go from %d to %d.\n", n_years, start_population, end_population);

    return 0;
}
