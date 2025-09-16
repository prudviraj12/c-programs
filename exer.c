#include <stdio.h>
int main() {
    int a, b, choice;
    printf("Enter any number a: ");
    scanf("%d", &a);
    printf("Enter any number b: ");
    scanf("%d", &b);

    printf("Enter which operator:\n");
    printf("1. sum (a+b)\n");
    printf("2. sub (a-b)\n");
    printf("3. mult (a*b)\n");
    printf("4. div (a/b)\n");
    scanf("%d", &choice);

    if(choice == 1)
        printf("sum: %d", a + b);
    else if(choice == 2)
        printf("sub: %d", a - b);
    else if(choice == 3)
        printf("mult: %d", a * b);
    else if(choice == 4) {
        if(b != 0)
            printf("div: %d", a / b);
        else
            printf("Error: Division by zero!");
    }
    else
        printf("Invalid choice");
    
    return 0;
}

