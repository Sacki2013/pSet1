#include <stdio.h>
#include <math.h>

int main(void) {

  // Initialize Variables
  int coinsTotal;
  float changeDue, cents;
  float quarter = 25;
  float dime = 10;
  float nickel = 5;
  float pennies = 1;

  // Prompt the user to input amoumt.
  do {
    printf("How much change are you owed? ($)(Format = 0.00): ");
    scanf("%f", &changeDue);
    // Convert to Cents
    cents = changeDue * 100;
  } while(cents <= 0);

  // Quarters
  while (cents >= quarter) {
    cents = cents - quarter;
    coinsTotal = coinsTotal + 1;
  } if (cents == 0) {
    printf("The minimum number of coins is: %d\n", coinsTotal);
  } else {

  // Dimes
    while (cents >= dime) {
      cents = cents - dime;
      coinsTotal = coinsTotal + 1;
    } if (cents == 0) {
      printf("The minimum number of coins is: %d\n", coinsTotal);
  } else {

  // Nickels
    while (cents >= nickel) {
      cents = cents - nickel;
      coinsTotal = coinsTotal + 1;
    } if (cents == 0) {
      printf("The minimum number of coins is: %d\n", coinsTotal);
    }
  }
}}
