#include<stdio.h>

/*
void printHello(int count);

int main(){
    printHello(5);
    return 0;
}

/recursive function
void printHello(int count){
    if(count == 0){
        return;
    }
    printf("Hello World! \n");
    printHello(count - 1);
}
*/

//------------------------------------------------------------------

/*
int sum(int n);

int main(){
    int n;
    printf("enter the number till where it has to be summed:");
    scanf("%d", &n);
    printf("Sum is: %d", sum(n));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
*/

//--------------------------------------------------------------------

/*
int fact(int n);

int main(){
    int n;
    printf("enter the number till where it u have to find factorial:");
    scanf("%d", &n);
    printf("Factorial is: %d", fact(n));
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
    return factN;
}
*/

//---------------------------------------------------------------------

//****IMP****
//FIBONACCI SERIES[0,1,1,2,3,5,8,13,21,34,55,89,144]
int fib(int n);

int main(){
    int n;
    printf("Enter the nth term till where u want the series:");
    scanf("%d", &n);

    printf("Fibonacci of %d is: %d", n, fib(n));
    return 0;
}

int fib(int n){
    if (n == 0 || n==1){
        if(n== 0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1+ fibNm2;
    return fibN;

}