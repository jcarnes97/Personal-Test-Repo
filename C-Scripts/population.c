#include <stdio.h>

int main() {
    int start_population, end_population, n_years = 0;

    do {
        printf("Enter the starting population (must be greater than 9): ");
        scanf("%d", &start_population);
    } while (start_population <= 9);

    do{
    printf("Enter the end population: ");
    scanf("%d", &end_population);
    }while (end_population <= start_population);

    int n = start_population;
    while (n < end_population) {
        n += n/3 - n/4;
        n_years++;
    }

    printf("It will take %d years\n", n_years);

    return 0;
}
