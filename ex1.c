/******************
Name: Thomas Kowalski
ID: *********
Assignment: Ex1
*******************/
#include <stdio.h>
// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  const int FIRST_BIT_MASK = 1;


  // What bit Task 1
    printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */

  int num1, pos1;
  printf("Please enter a number:\n");
  scanf("%d", &num1);

  printf("Please enter a position:\n");
  scanf("%d", &pos1);

  int bit1 = num1 >> (pos1);
  bit1 = bit1 & FIRST_BIT_MASK;
  printf("The bit in position %d of number %d is: %d\n", pos1, num1, bit1);

  // Set bit Task 2
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  int num2, pos2;
  printf("Please enter a number:\n");
  scanf("%d", &num2);

  printf("Please enter a position:\n");
  scanf("%d", &pos2);

  int bit2offMask = ~(1 << pos2);
  int bit2onMask = 1 << pos2;

  int bit2on = num2 | bit2onMask;
  int bit2off = num2 & bit2offMask;
  printf("Number with bit %d set to 1: %d\n", pos2, bit2on);
  printf("Number with bit %d set to 0: %d\n", pos2, bit2off);

  // Toggle bit Task 3
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  int num3, pos3;
  printf("Please enter a number:\n");
  scanf("%d", &num3);

  printf("Please enter a position:\n");
  scanf("%d", &pos3);

  int bit3onMask = 1 << pos3;
  int bit3toggle = num3 ^ bit3onMask;

  printf("Number with bit %d toggled: %d\n", pos3, bit3toggle);

  // Even - Odd Task 4
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  int num4;
  printf("Please enter a number:\n");
  scanf("%d", &num4);
  num4 = num4 & FIRST_BIT_MASK;
  num4 = num4 ^ 1;
  printf("%d", num4);

  // 3, 5, 7, 11 Task 5
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int firstNum5, secondNum5;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &firstNum5);

  printf("Please enter the second number (octal):\n");
  scanf("%o", &secondNum5);

  int sum5 = firstNum5 + secondNum5;

  int thirdBit, fifthBit, seventhBit, eleventhBit;
  thirdBit = (sum5 >> 3) & FIRST_BIT_MASK;
  fifthBit = (sum5 >> 5) & FIRST_BIT_MASK;
  seventhBit = (sum5 >> 7) & FIRST_BIT_MASK;
  eleventhBit = (sum5 >> 11) & FIRST_BIT_MASK;

  printf("The sum in hexadecimal: %X\n", sum5);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", thirdBit , fifthBit, seventhBit, eleventhBit);

  printf("Bye!\n");
  
  return 0;
}
