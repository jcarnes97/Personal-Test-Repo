#include <stdio.h>

int main() {
  double start_population, end_population, growth_rate;
  int years = 0;

  printf("Enter the starting population: ");
  scanf("%lf", &start_population);
  printf("Enter the end population: ");
  scanf("%lf", &end_population);
  // delete below and make Growth Rate A Variable with the Equation from population.c file.
  // make a do/while loop to determine how many times to run the equation.
  // keep int years = 0 and the printf function at the bottom. find a way to turn the growth rate variable into the
  // equation then submit to harvard.
  printf("Enter the growth rate as a decimal: ");
  scanf("%lf", &growth_rate);

  while (start_population < end_population) {
    start_population = start_population * (1 + growth_rate);
    years++;
  }

  printf("It will take %d years to reach the end population.\n", years);
  return 0;
}