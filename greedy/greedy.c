#include <stdio.h>
#include <math.h>

int main() {
  // Initialize Variables
  int coinsTotal = 0,
      quarter = 25,
      dime = 10,
      nickel = 5,
      penny = 1,
      centRnd;
  float changeDue, cents;

  // Prompt User to Input Change amount
  do {
    printf("How much change are you owed? (Format = 0.00)($): ");
    scanf("%f", &changeDue );
    // Convert to cents
    cents = changeDue * 100;
    centRnd = round(cents);

  } while(centRnd <= 0);

  // Line 24 = quarters, Line 29 = dimes, Line 35 nickels, Line 41 pennies
    // Uses a while loops to check if the number of cents remaining is greater
    // than or equal to the coin in question, if it is it reduces by that coins
    // value and adds 1 coin to cointTotal, this will loop until it fails and
    // pass to an if statement checking if the cents left is zero, if it is it
    // will output total coins, if not it will move to next denomination until
    // complettion.
  while (centRnd >= quarter) {
    centRnd = centRnd - quarter;
    coinsTotal = coinsTotal + 1;
  } if (centRnd == 0) {
      printf("The miminum number of coins is: %d\n", coinsTotal);
  } else {
      while (centRnd >= dime) {
        centRnd = centRnd- dime;
        coinsTotal = coinsTotal + 1;
      } if (centRnd == 0) {
          printf("The minimum number of coins is: %d\n", coinsTotal);
      } else {
          while (centRnd >= nickel) {
            centRnd = centRnd - nickel;
            coinsTotal = coinsTotal + 1;
          } if (centRnd == 0) {
              printf("The minimum number of coins is: %d\n", coinsTotal);
          } else {
              while (centRnd >= penny) {
                centRnd = centRnd - penny;
                coinsTotal = coinsTotal + 1;
              } if (centRnd == 0) {
                  printf("The minimum number of coins is: %d\n", coinsTotal);
                }
        }
      }
    }
}
