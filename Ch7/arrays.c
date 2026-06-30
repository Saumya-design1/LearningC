#include<stdio.h>
/*
int main(){
    // int marks1 = 97;
    // int marks2 = 98;
    // int marks3 = 99;

    //Array
    int marks[3];
    int marks[]= {97,97,99};// we can declare and initialise at the same time 
    printf("Enter phy mrks: ");
    scanf("%d", &marks[0]);

    printf("Enter chem mrks: ");
    scanf("%d", &marks[1]);

    printf("Enter maths mrks: ");
    scanf("%d", &marks[2]);

    printf("P= %d, C=%d, M= %d", marks[0], marks[1], marks[2]);
    return 0;
}
*/

//-----------------------------------------------------------------------

/*
int main(){
    float items[3];
    printf("Enter price of item1: ");
    scanf("%f", &items[0]);

    printf("Enter price of item2: ");
    scanf("%f", &items[1]);

    printf("Enter price of item3: ");
    scanf("%f", &items[2]);

    printf("1= %f, 2=%f, 3= %f", (items[0]+0.18*items[0]), (items[1]+0.18*items[1]), (items[2]+0.18*items[2]));
    return 0;
}
*/

//-----------------------------------------------------------------------

/*
int main(){
    int aadhar[5];
    //Array itself are pointer.
    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d index: ", i);
        scanf("%d", (ptr+i));
    }

    //output
    for(int i=0; i<5; i++){
        printf("\n%d index = %d\n", i, *(ptr+i));
    }
    return 0;
}
*/

//-----------------------------------------------------------------------

/*
void printNumbers(int arr[], int n);

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

void printNumbers(int arr[], int n){
    for (int i = 0; i <n; i++){
        printf("%d \t", arr[i]);
    }
}
*/

//-----------------------------------------------------------------------

// //MULTIDIMENSIONAL ARRAYS
// //2D ARRAYS
// int arr[][] = {{1,2},{3,4}}; // Declare

// //Access
// arr[0][0]//1
// arr[0][1]//2
// arr[1][0]//3
// arr[1][1]//4

/*
int main(){
    //2 kids X 3 subject marks
    int marks[2][3];// _ _ _ | _ _ _
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 91;

    marks[1][0] = 93;
    marks[1][1] = 96;
    marks[1][2] = 87;

    printf("The marks of 1st student in first subject is %d", marks[0][0]);
    return 0;
}
*/

//----------------------------------------------------------------------

/*
//Write a function to count the number od odd numbers in an array.
void OddNo(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    OddNo(arr, 10);
    return 0;
}

void OddNo(int arr[], int n){
    for(int i = 0; i<n; i++){
        if(arr[i]%2 != 0){
            printf("%d\t",arr[i]);
        }
    }
}
*/

//-----------------------------------------------------------------------

/*
//Write a function to reverse an array.
void rev(int arr[], int n);

int main(){
    int arr[]= {1,2,3,4,5};
    rev(arr, 5);
    return 0;
}

void rev(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        printf("%d", arr[i]);
    }
}
*/

//-----------------------------------------------------------------------

//****IMPORTANT****
void storeTable(int arr[][10], int n, int m, int number);
int main(){
    //2 tables X 10 values

    int tables[2][10];// _ _ _ _ _ _ _ _ _ _ | _ _ _ _ _ _ _ _ _ _
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);
    
    for(int i=0; i<10; i++){
        printf("%d\t", tables[0][i]);
    }

    printf("\n");

    for(int i=0; i<10; i++){
        printf("%d\t", tables[1][i]);
    }
    return 0;
}
void storeTable(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number*(i+1);
    }
}

//-----------------------------------------------------------------------

/*
//****IMPORTANT****
//Write a program to store first n fibonacci numbers.
int main(){
    int n;
    printf("Enter n(n>2):");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t", fib[0]);
    printf("%d\t", fib[1]);

    for(int i = 2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t", fib[i]);
    }
    return 0;
}
*/