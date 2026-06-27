#include<stdio.h>
#include<math.h>

int main() {
    ////TYPE DEcLARATION
    // Valid code
    /*int a = 22;
    int b = a;
    int c = b + 1;
    int d = 1 , e;*/

    // Valid Code
    int a,b,c;
    a=b=c=1;

    /*
    Invalid Code
    int a,b,c = 1;
    Why? Because we can't declare and use in the same line. We need to declare in one line and use it in another.*/


    ////ARITHEMATIC INSTRUCTIONS
    int x = 2, y = 3;
    int sum = x+y;
    int mul = x*y;
    printf("The sum is %d and the multiplication is %d\n", sum, mul);

    int power = pow(x,y);
    printf("X to the power y is: %d\n", power);

    printf("The reaminder when we divide 16 to 10 is: %d\n", 16%10);
    // Modulo function(%) is usd to show the remainder. It works only on integers not on floats.

    // int op int --> int
    // int op float --> float
    // float op float --> float

    // Just like BODMAS in maths we also have precedence order in c and i.e first brackets then *,/,% then +,- and then =; but when we have same precedence operators then according to associativity we solve from left to right like if we have 4*3/6*2 we solve it like ((4*3)/6)*2.


    ////CONTROL INSTRUCTIONS
    /*
    1. Sequence control
        It is what we learnt before basically the normal sequence that first the first line is executed or read and then the seconf line.
    2. Decision control
        if/else
    3. Loop control
        for/while
    4. Case control
        Based on cases like on what instruction which code has to be executed.
    */

    ////Different types of operators
    /*
    Arithematic operators are +,-,*,/
    Relational operators are ==, >, >=, <, <=, !=.
    Logical operator are
        && - AND
        || - OR
        ! - NOT
    Assignment Operators are =, +=, -=, *=, /=, %=;basically it means like a = a+b is same as a += b and so on.

    Between these operators there exists a precedence too that goes like:
        1) !
        2) *,/,%
        3) +,-
        4) <,<=,>,>=
        5) ==, !=
        6) &&
        7) ||
        8) =
    */

    /*Write a program to check if a number is divisible by 2 or not.
    OR
    Write a program to check if a number is even or odd.*/
    int p;
    printf("Enter the number: ");
    scanf("%d", &p);
    printf("%d", p % 2 == 0);
    
    
    /* Another way to code this program.
    int p;
    printf("Enter the number: ");
    scanf("%d", &p);
    if (p % 2 == 0){
        printf("The number is divisible by 2.");}
    else{
        printf("The number is not divisible by 2.");}
    */
    return 0;
}