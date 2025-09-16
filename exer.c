#include <stdio.h>
#include <math.h>

int main() {
//#include <stdio.h>

//int main() {
//	1st one

//   int a, b, choice;
//
//
//    printf("Enter any number a: ");
//    scanf("%d", &a);
//    printf("Enter any number b: ");
//    scanf("%d", &b); 
//
//    printf("Enter which operator:\n");
//    printf("1. sum (a+b)\n");
//    printf("2. sub (a-b)\n");
//    printf("3. mult (a*b)\n");
//    printf("4. div (a/b)\n");
//    scanf("%d", &choice);
//
//    if(choice == 1)
//        printf("sum: %d", a + b);
//    else if(choice == 2)
//        printf("sub: %d", a - b);
//    else if(choice == 3)
//        printf("mult: %d", a * b);
//    else if(choice == 4) {
//        if(b != 0)
//            printf("div: %d", a / b);
//        else
//            printf("Error: Division by zero!");
//    }
//    else
//        printf("Invalid choice");
        
//        2nd one

    

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d = (b * b) - (4 * a * c);
    if (d == 0) {
        double r = -b / (2.0 * a);
        printf("Real and Equal\n");
        printf("root = %.2f", r);
    } else if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2.0 * a);
        double r2 = (-b - sqrt(d)) / (2.0 * a);
        printf("Real and Different\n");
        printf("root1 = %.2f, root2 = %.2f", r1, r2);
    } else {
        double real = -b / (2.0 * a);
        double imag = sqrt(-d) / (2.0 * a);
        printf("Imaginary\n");
        printf("root1 = %.2f+%.2fi, root2 = %.2f-%.2fi", real, imag, real, imag);
    }
    return 0;
}


