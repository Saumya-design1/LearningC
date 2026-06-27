#include<stdio.h>

int main(){
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    // int i = 0;
    // while(i<=n){
    //     printf("%d \n",i);
    //     i ++;
    // }

    // for(int i=0; i<=n; i++){
    //     printf("%d \n", i);
    // }

    /*
    // do_while loop men pehle kaam hoga phir cond check hogi
    int j = 1 ;
    do{
        printf("%d\n",j);
        j++;
    }while(j<=5);
    */

    //Print the sum of first n natural number and print the numbers in reverse order.
    int m;
    printf("Enter the number where sum has to occur: ");
    scanf("%d", &m);

    int sum = 0;
    for(int k=1; k<=m; k++){
        sum += k;
    }
    printf("The sum is %d \n", sum);

    for(int k=m;k>=1; k--){
        printf("%d \n",k);
    }

    ///Another way
    // int sum=0;
    // for(int p=1, q=m; p<=m && q>=1; p++, q--){
    //     sum += p;
    //     printf("%d \n",q);
    // }
    // printf("The sum is %d \n", sum);

    int input;
    do{
        printf("Enter number: ");
        scanf("%d", &input);

        if(input %2 !=0){;
            break;
        }
    }while(1);
    printf("Odd number.Thank You!\n");

    // for(int s=1; s<=5; s++){
    //     if(s == 3){ //skip this block
    //         continue;
    //     }
    //     printf("%d \n", s);
    // }

    // // Print all the odd number between 5 to 50.
    // for(int r = 5; r<=50; r++){
    //     if(r%2 == 0){
    //         continue;
    //     }
    //     printf("%d \n", r);
    // }

    int num;
    printf("Enter the number for which you want factorial: ");
    scanf("%d", &num);

    int factorial = 1;
    for(int f=1; f<=num; f++){
        factorial *=f;
    }
    printf("%d \n", factorial);

    //Print reverse of the table for a number n.
    int num2;
    printf("Enter the number for which you want reversed table: ");
    scanf("%d", &num2);

    for(int t=10;t>=1; t--){
        printf("%d \n", num2*t);
    }
    return 0;
}