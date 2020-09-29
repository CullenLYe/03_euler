#include <stdio.h>
#include <stdlib.h>

void main() {

  int answer1 = 0, answer6, i, i1 = 0, i2 = 0;
  /*Question 1: Multiples of 3 and 5
    If we list all the natural numbers below 10 that are multiples of 3 or 5,
    we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all
    the multiples of 3 or 5 below 1000.*/
  // Go through multiples of 3 and add them to answer1.
  for (i = 3; i < 1000; i+=3) {
    answer1+=i;
  }
  /*Go through multiples of 5 and add them to answer1 if they haven't been
    included yet.*/
  for (i = 5; i < 1000; i+=5) {
    if (i%3!=0) answer1+=i;
  }
  // Print the total.
  printf("Question 1: %d\n", answer1);
  // Prints "Question 1: "233168"

  /*Question 5: Sum Square Difference
    Find the difference between the sum of the squares of the first one hundred
    natural numbers and the square of the sum.*/
  // Go through 1-100 & add i^2 to i1 while adding i to i2.
  for (i = 1; i <= 100; i++) {
    i1+=i*i;
    i2+=i;
  }
  // Find the difference of the sum of the squares and the square of the sum.
  answer6 = i2*i2-i1;
  // Print the difference.
  printf("Question 6: %d", answer6);
  // Prints: "Question 2: 25164150"

}
