#include <cs50.h>
#include <stdio.h>

int main(void) {

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
//Do While Promt Loop for Amount Of Years
  do
  {
      printf("\n");
      years = get_int("Type Amount of Years and Press the Enter Key: ");
  }
  while (years < 0);
  // print starting population and years after prompt
   printf("\n");
   printf("Starting Population: %d\n", starting_pop);
   printf("Years: %d\n", years);
   // redefine population as starting population
   pop = starting_pop;
 //   int new_pop = (pop + (pop / 3) - (pop / 4)); (calculating New Population) (years is the number of times the equation has looped)
 //   int pop_growth = pop / 3;
 //   int pop_decline = pop / 4;
 //   loop to calculate ending population
   do
   {
    int new_pop = (pop + (pop / 3) - (pop / 4));
    years = (years - 1);
    pop = new_pop;
   }
    while(years > 0);
//    printing end population and bottom of code
   printf("End Population: %d\n", pop);
   printf("\n");

// TODO: Prompt for start size
// TODO: Prompt for end size
// TODO: Calculate number of years until we reach threshold
// TODO: Print number of years
}