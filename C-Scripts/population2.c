#include <cs50.h>
#include <stdio.h>

int main(void) {
// TODO: Prompt for start size
// Declare Global Variabes
int current_pop;
int starting_pop;
int pop;
int years;
//Do while Promt loop for starting population > 9
  do
  {
      printf("\n");
      starting_pop = get_int("Type Starting Population and Press the Enter Key: ");
  }
  while (starting_pop < 9);
   printf("\n");
//Do While Promt Loop for Amount Of Years
  do
  {
      printf("\n");
      years = get_int("Type Amount of Years and Press the Enter Key: ");
  }
  while (years < 0);
   printf("\n");
   printf("Starting Population: %d\n", starting_pop);
   printf("Years: %d\n", years);
   pop = starting_pop;

 //   int pop_growth = pop / 3;
 //   int pop_decline = pop / 4;
   do
   {
    int new_pop = (pop + (pop / 3) - (pop / 4));
    years = (years - 1);
    pop = new_pop;
   }
    while(years > 0);

   printf("End Population: %d\n", pop);
   printf("\n");
// TODO: Prompt for end size
// TODO: Calculate number of years until we reach threshold
// TODO: Print number of years
}