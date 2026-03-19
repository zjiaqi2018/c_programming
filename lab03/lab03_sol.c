#include <stdio.h>

// Task 03: Memory Sizes
// Demonstrates the use of the sizeof operator on types, pointers, and expressions.
void task03() {
    printf("--- Task 03 Output ---\n");
    // %zu is the correct format specifier for size_t (the type returned by sizeof)
    printf("Size of char: %zu byte\n", sizeof(char));
    
    // Note: All pointers (char*, int*) usually have the same size on a 64-bit system (8 bytes)
    printf("Size of char pointer: %zu bytes\n", sizeof(char*));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of int pointer: %zu bytes\n", sizeof(int*));
    
    // long double is used for high-precision floating point numbers
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    
    // 3.5 is treated as a 'double' literal by default; 2 is an 'int'. 
    // The expression (double + int) results in a 'double'.
    printf("Size of an expression (3.5 + 2): %zu bytes\n\n", sizeof(3.5 + 2));
}

// Task 04: Casting and Constraints
// Demonstrates how to fix types and use explicit casting to match printf specifiers.
void task04() {
    printf("--- Task 04 Output ---\n");
    int x; 
    float y; // Changed from int to float to support decimal output in printf
    int c;

    // 7/2 is integer division, resulting in 3. Remainder is discarded.
    x = 7 / 2;               
    
    // To get 0.50, we must force floating-point division. 
    // (float)1 converts the integer 1 to 1.0 before division.
    y = (float)1 / 2;        
    
    // ASCII value for 'A' is 65. Adding 1 in printf results in 'B'.
    c = 65;                  

    // x matches %d, y matches %.2f, and (c+1) matches %c
    printf("x = %d, y = %.2f, c = %c\n\n", x, y, c + 1);
}

// Task 05: ASCII Logic
// Demonstrates character input and mathematical manipulation of char values.
void task05() {
    printf("--- Task 05 Output ---\n");
    char ch;
    printf("Enter a lowercase letter: ");
    
    // The space before %c in scanf is a "buffer flush" trick.
    // It skips any leftover whitespace/newlines from previous user inputs.
    scanf(" %c", &ch); 
    
    // ASCII math:
    // 1. (ch - 32) converts lowercase to uppercase (e.g., 'a'(97) - 32 = 'A'(65))
    // 2. We then add 1 and 2 to get the next characters in the sequence.
    printf("%c%c\n\n", ch - 32 + 1, ch - 32 + 2);
}

// Task 06: Number Bases and Binary
// Demonstrates built-in base formatting and manual binary output via bitwise logic.
void task06() {
    printf("--- Task 06 Output ---\n");
    int input;
    printf("Enter a decimal integer: ");
    scanf("%d", &input);
    
    printf("Decimal: %d\n", input);
    printf("Octal:   %o\n", input); // %o prints in base 8
    printf("Hex:     %X\n", input); // %X prints in base 16 (uppercase)
    
    printf("Binary:  ");
    // C doesn't have %b (except in C23). We shift the integer bit-by-bit.
    // Starting from bit 31 (Most Significant Bit) down to bit 0.
    for (int i = 31; i >= 0; i--) {
        // (input >> i) moves the target bit to the furthest right position.
        // '& 1' checks if that specific bit is 1 or 0.
        int bit = (input >> i) & 1;
        printf("%d", bit);
        
        // Formatting: add a space every 8 bits (1 byte) for readability.
        if (i % 8 == 0 && i != 0) printf(" "); 
    }
    
    /* Task 6 Explanation Requirement:
       Input 255: 
       Hex: FF (255 = 15*16^1 + 15*16^0. Since 15 is 'F', it becomes FF).
       Binary: 11111111 (255 is the maximum value for 8 bits, so all 8 are 1).
    */
    printf("\n\n");
}

// Task 07: Round-off Errors
// Demonstrates precision limits of the IEEE 754 binary floating-point standard.
void task07() {
    printf("--- Task 07 Output ---\n");
    double val = 0.1 + 0.1 + 0.1;
    
    // Printing to 20 decimal places reveals the internal "garbage" digits.
    printf("0.1+0.1+0.1 stored at high precision: %.20f\n", val);
    
    // This comparison usually fails because 0.30000000000000004 != 0.3
    if (val == 0.3) {
        printf("Equal to 0.3\n");
    } else {
        printf("NOT equal to 0.3\n");
    }
    
    /* Task 7 Explanation Requirement:
       0.1 is a repeating fraction in binary (like 1/3 is 0.333... in decimal).
       Computers must round this value to fit it into memory. Summing three
       rounded values leads to an error that differs slightly from the 
       rounded representation of 0.3.
    */
    printf("\n");
}

// Task 08: Type Conversion
// Demonstrates implicit promotion (int to float) and truncation (float to int).
void task08() {
    printf("--- Task 08 Output ---\n");
    int a = 5; 
    float b = 2.0;
    
    // Implicit Promotion: C promotes 'a' to float (5.0) to perform 5.0 / 2.0.
    // The resulting 2.5 is stored in float res1.
    float res1 = a / b; 
    
    // Truncation: The float result 2.5 is calculated, but then assigned to an int.
    // The decimal (.5) is chopped off (truncated), not rounded.
    int res2 = a / b;   
    
    printf("Res1: %.1f, Res2: %d\n\n", res1, res2);
    
    /* Task 8 Explanation Requirement:
       res1 results in 2.5 because mixing int and float triggers 'promotion'.
       res2 results in 2 because assigning a float to an int 'truncates' the decimal.
    */
}

int main() {
    // Run all lab tasks sequentially
    task03();
    task04();
    task05();
    task06();
    task07();
    task08();
    
    return 0;
}