#include <stdio.h>

int main() {
  double start_population, end_population, growth_rate;
  int years = 0;

  printf("Enter the starting population: ");
  scanf("%lf", &start_population);
  printf("Enter the end population: ");
  scanf("%lf", &end_population);
  printf("Enter the growth rate as a decimal: ");
  scanf("%lf", &growth_rate);

  while (start_population < end_population) {
    start_population = start_population * (1 + growth_rate);
    years++;
  }

  printf("It will take %d years to reach the end population.\n", years);
  return 0;
}