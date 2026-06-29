#include<stdio.h>
// This code displays how data types work in C

int main() {
    // Basic types of Data types
    char star = '*';
    float pi = 3.14;

    /*
    int a = 30;
    int A = 40;
    */

    int num = 22;
    num = 24;

    printf("Hello world\n");
    printf("Hello world\n");

    printf("star is %c\n", star);
    printf("Value of pi is %f\n", pi);
    printf("The num is %d\n",num);

    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your age is: %d\n",age);

    int a , b;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);
    printf("The sum of the number is: %d", a + b);

    return 0;
}