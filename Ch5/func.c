#include<stdio.h>
/*
//function declaration/prototype
void printHello();
void printGoodbye();

int main(){
    printHello(); // function call
    printGoodbye();
    return 0;
}

//function definition
void printHello(){
    printf("Hello!\n");
}

void printGoodbye(){
    printf("Goodbye:)\n");
}
*/

//-----------------------------------------------------------------------

/*
void greeting();

int main(){
    greeting();
    return 0;
}

void greeting(){
    char g;
    printf("Enter i if indian or f if french: ");
    scanf("%c", &g);

    if(g == 'i'){
        printf("Namaste");
    } 
    else if (g == 'f'){
        printf("Bonjour!");
    }
    else{
        printf("Invalid input!");
    }
}
*/

//------------------------------------------------------------------------

/*
int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);

    // int s = sum(a, b);
    printf("Sum is %d", sum(a,b)); 
    return 0;
}

int sum(int x, int y){
    return x + y;
}
*/

//-----------------------------------------------------------------------

/*
void printTable(int n); // Here n is parameter/formal parameter

int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    printTable(n); // Here n is argument/actual parameter

    return 0;
}

void printTable(int n){ // Here n is parameter/formal parameter
    for(int i = 1; i<=10; i++){
        printf("%d \n", n*i);
    }
}
*/

//----------------------------------------------------------------------

/*
#include<math.h>

int power(int n);

int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    power(n);

    return 0;
}

int power(int n){
    int p = pow(n,2);
    printf("Square is %d", p);
}
*/

//----------------------------------------------------------------------

/*
#include<math.h>

float square(float side);
float circle(float rad);
float rect(float l, float b);

int main(){
    float side;
    printf("Enter side: ");
    scanf("%f", &side);
    float rad;
    printf("Enter radius: ");
    scanf("%f", &rad);
    float l;
    printf("Enter length: ");
    scanf("%f", &l);
    float b;
    printf("Enter breadth: ");
    scanf("%f", &b);

    square(side);
    circle(rad);
    rect(l,b);

    return 0;
}

float square(float side){
    float s = pow(side,2);
    printf("Area of square is %f \n", s);
}

float circle(float rad){
    float r = 3.14*rad*rad;
    printf("The area of circle is %f \n", r);
}

float rect(float l, float b){
    float a = l*b;
    printf("The area of rectangle is %f \n", a);
}
*/

//---------------------------------------------------------------

/*
float CtoF(int n);

int main(){
    float n;
    printf("ENter the temperature in celcius:");
    scanf("%f", &n);
    
    float temp = CtoF(n);
    printf("The above value in fahrenheit is: %f", temp);
    return 0;
}

float CtoF(int n){
    return ((n*1.8)+32);
}
*/

//--------------------------------------------------------------------

/*
float percentage(float m1, float m2, float m3);

int main(){
    float m1;
    printf("Enter the marks in science:");
    scanf("%f", &m1);
    float m2;
    printf("Enter the marks in maths:");
    scanf("%f", &m2);
    float m3;
    printf("Enter the marks in sanskrit:");
    scanf("%f", &m3);

    printf("Your percentage is: %f", percentage(m1,m2,m3));

    return 0;
}

float percentage(float m1,float m2, float m3){
    return (((m1+m2+m3)/300)*100);
}
*/

//---------------------------------------------------------------------

