#include <stdio.h>

// Task 25: Multiples of 4 not 5
void task25() {
    int n, sum = 0, first = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Warning: Positive integer required.\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0 && i % 5 != 0) {
            if (!first) printf(" + ");
            printf("%d", i);
            sum += i;
            first = 0;
        }
    }
    if (first) printf("No numbers found");
    printf(" = %d\n", sum);
}

// Task 26: BMI with conversion
void task26() {
    float kg, cm, m, bmi;
    printf("Enter weight(kg) and height(cm): ");
    scanf("%f %f", &kg, &cm);
    m = cm / 100.0;
    bmi = kg / (m * m);
    if (bmi < 18.5) printf("Underweight\n");
    else if (bmi < 24.9) printf("Normal\n");
    else printf("Overweight\n");
}

// Task 27: Custom Logic
void task27() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n > 0 && n % 3 == 0) n += 10;
    else if (n > 0 && n % 2 == 0) n /= 2;
    else n = 0;
    printf("Result: %d\n", n);
}

// Task 29: Triangle and Perimeter
void task29() {
    float a, b, c;
    printf("Enter 3 sides: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Warning: Positive values only.\n");
    } else if (a + b > c && a + c > b && b + c > a) {
        printf("Perimeter: %.2f\n", a + b + c);
    } else {
        printf("Invalid triangle\n");
    }
}

// Task 30: Switch with Pass
void task30() {
    char g;
    float p;
    int v = 1;
    printf("Enter grade: ");
    scanf(" %c", &g);
    switch(g) {
        case 'A': case 'a': p = 4.0; break;
        case 'B': case 'b': p = 3.0; break;
        case 'C': case 'c': p = 2.0; break;
        case 'P': case 'p': p = 2.5; break;
        case 'F': case 'f': p = 0.0; break;
        default: v = 0;
    }
    if (v) printf("Points: %.2f\n", p);
    else printf("Warning: Invalid grade.\n");
}

int main() {
    // Implement calls as needed
    return 0;
}
