/*
 * File: 3-alphABET
 * Auth: achraf ibn cheikh
 */

#include <stdio.h>

int main(void) {
 
 /**
  * main - Prints the alphabet in lowercase.
  *
  * Return: Always 0.
  */
  char letter;

  for (letter = 'a'; letter <= 'z'; letter++) {
    putchar(letter);
  }
  
  for (letter = 'A'; letter <= 'Z'; letter++) {
    putchar(letter);
  }

  putchar('\n');

  return (0);
}
