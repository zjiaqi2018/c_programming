#include <stdio.h>

// Task 15: Compound Increment
void task15() {
    printf("--- Task 15 Output ---\n");
    int a = 10, b = 10;
    int result;
    
    // a++ evaluates to 10 (then a becomes 11)
    // ++b increments b to 11 (then evaluates to 11)
    // result = 10 + 11 = 21
    result = (a++) + (++b);
    
    printf("a = %d, b = %d\n", a, b);
    printf("Result (aligned): [%10d]\n\n", result);
    /* Explanation: 
       a++ (postfix): The current value is used in the expression, 
       then the variable is incremented.
       ++b (prefix): The variable is incremented first, then the 
       new value is used in the expression. */
}

// Task 16: Loop Increments
void task16() {
    printf("--- Task 16 Output ---\n");
    
    printf("Loop 1 (i++): ");
    int i = 0;
    while (i++ < 5) {
        printf("%d ", i);
    }
    // Output: 1 2 3 4 5
    // Explanation: Loop checks (0<5), increments i to 1, then prints 1.

    printf("\nLoop 2 (++j): ");
    int j = 0;
    while (++j < 5) {
        printf("%d ", j);
    }
    // Output: 1 2 3 4
    // Explanation: Loop increments j to 1, checks (1<5), then prints 1.
    printf("\n\n");
}

// Task 17: Average Calculation
void task17() {
    printf("--- Task 17 Output ---\n");
    int s1 = 7, s2 = 8, s3 = 9;
    
    int avgInt = (s1 + s2 + s3) / 3;
    float avgFloat = (float)(s1 + s2 + s3) / 3.0;
    
    printf("Integer Average: %d\n", avgInt);
    printf("Float Average:   %.3f\n\n", avgFloat);
    /* Explanation: Integer division truncates the decimal part.
       Casting to float or using a float divisor (3.0) forces the 
       compiler to preserve precision. */
}

// Task 18: Cascading Increments
void task18() {
    printf("--- Task 18 Output ---\n");
    int k = 5;
    int m = ++k + ++k; 
    // Logic: k becomes 6, then k becomes 7. 
    // Depending on compiler, m could be 6+7=13 or 7+7=14.
    printf("k = %d, m = %d\n\n", k, m);
    /* Explanation: This is bad practice because it relies on 
       unspecified evaluation order between sequence points. 
       Always increment on separate lines for clarity. */
}

// Task 19: Modulo and Parity
void task19() {
    printf("--- Task 19 Output ---\n");
    int num;
    printf("Enter an integer: ");
    // Clear buffer and read int
    if (scanf("%d", &num) != 1) return;
    
    // Parity Logic: (num % 2) is 0 for even, 1 for odd.
    // To flip this: 1 - (num % 2).
    int isEven = 1 - (num % 2);
    printf("Is Even (1=Yes, 0=No): %d\n\n", isEven);
}

int main() {
    task15();
    task16();
    task17();
    task18();
    task19();
    return 0;
}