#include<stdio.h>
/*
int main(){
    
    ||||||Basics of pointers|||||||
    int age = 22;
    int *ptr= &age;

    //address
    // printf("%p\n", &age);
    printf("%u\n", &age);

    printf("%u\n", ptr);

    printf("%u\n", &ptr);


    //value
    printf("%d\n", age);

    printf("%d\n", *ptr);

    printf("%d\n", *(&age));

    // age=value -> *ptr = &age = value -> **pptr= *ptr=value

    return 0;
}
*/

//---------------------------------------------------------------------- 

/*
void square(int n);//call by value
void _square(int *n);//call by address/reference

int main(){
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);
    return 0;
}

void square(int n){
    n = n * n;
    printf("Square = %d\n", n);
}
void _square(int *n){
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}
*/

//-----------------------------------------------------------------

/*
int swap(int a, int b);
int _swap(int *a, int *b);

int main(){
    int x =3;
    int y = 5;
    swap(x,y);
    printf("X is %d,\nY is %d\n", x,y);

    _swap(&x,&y);
    printf("X is %d,\nY is %d\n", x,y);
    return 0;
}

//call by value
int swap(int a, int b){
    int t;
    t=b;
    b=a;
    a=t;
    printf("A is %d,\nB is %d\n", a,b);
}

// proper swapping
//call by reference
int _swap(int *a, int *b){
    int t;
    t=*b;
    *b=*a;
    *a=t;
    printf("A is %d,\nB is %d\n", *a,*b);
}
*/

//--------------------------------------------------------------------

//PRACTICAL EXAMPLE
//Write a function to calculate the sum, product and average of 2 numbers. Print that average, product and sum in the main function.

/* FUNCTION DECLARATION (Prototype)
   This function accepts two numbers by VALUE (copies),
   and three memory addresses by REFERENCE (pointers) so it can 
   directly modify the variables back in the main() function.
*/
void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    // 1. Initialize input variables
    int a = 3, b = 5;
    
    // 2. Declare variables to store the results (currently empty/garbage values)
    int sum, prod, avg;

    /* 3. Call the function.
       We pass 'a' and 'b' normally. 
       We use the '&' (address-of) operator to pass the actual memory 
       locations of 'sum', 'prod', and 'avg'.
    */
    doWork(a, b, &sum, &prod, &avg);
    
    // 4. Print the results (which have now been modified by the function)
    printf("Sum = %d, product = %d, average = %d\n", sum, prod, avg);
    
    return 0;
}

/* FUNCTION DEFINITION
   The asterisks (*) in the parameters mean these variables are POINTERS.
   They are holding the memory addresses passed from main().
*/
void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;     // Stores the result directly into main's 'sum' variable
    *prod = a * b;    // Stores the result directly into main's 'prod' variable
    *avg = (a + b)/2; // Stores the result directly into main's 'avg' variable 
}

//Pointer can be incremented or decremented but it increases by bytes not value