/*
=============================================
 Author: [Your Name Here]
 Student id: [Your Student ID Here]
 Description: Solutions for Lab02 Tasks 1-4 (Comments, Syntax, Semantics, Hard Mode)
 Date: 2026-03-05
=============================================
*/

#include <stdio.h>

void task1(void)
{
  // Task 1: Logical Control via Comments
  // Requirement: Print 4 lines. User can comment out specific lines to test logic.
  printf("The follow is the output of Task 1:\n");

  printf("Line 1: Welcome\n");
  // To test scenario A, uncomment the line below and comment the line above it?
  // No, the instruction says "If Line 2 is commented".
  // So normally, all are active.
  printf("Line 2: To\n");
  printf("Line 3: The\n");
  printf("Line 4: Lab\n");
}

void task2(void)
{
  // Task 2: Debugging Syntax Errors
  // Original errors fixed:
  // 1. Added missing semicolon after first printf.
  // 2. Added closing quote and newline in second printf.
  // 3. Added missing semicolon after return 0 (handled by function end here).
  printf("The follow is the output of Task 2:\n");

  printf("Error detected in system\n");
  printf("Please fix the code\n");
  printf("Compilation successful\n");
}

void task3(void)
{
  // Task 3: Advanced Comment Manipulation
  // Requirement: Three independent lines (A, B, C).
  // Any single line can be commented without breaking the others.
  printf("The follow is the output of Task 3:\n");

  printf("A\n");
  printf("B\n");
  printf("C\n");
}

void task4(void)
{
  printf("The follow is the output of Task 4:\n");
  int num1 = 10;
  int num2 = 15;
  int sum = num1 + num2;

  // Error 1: Calculating average
  float average = (float)sum / 2.0;

  int number = 7;
  // Error 2: Checking even / odd
  if (number % 2 == 1)
  {
    printf("The number is odd \n");
  }
  else
  {
    printf("The number is even\n");
  }
  
  printf("Sum: %d\n", sum);
  printf("Average : %.2f\n", average);
}

int main()
{
  task1();
  printf("\n");

  task2();
  printf("\n");

  task3();
  printf("\n");

  task4();
  printf("\n");

  return 0;
}