#include<stdio.h>

int main(){
    // We can use if inside is also.
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age>=18){
        printf("Tou are in legal age.\n");
    }
    else{
        printf("You are not in legal age.\n");
    }
    

    /*
    Shorthand for above using ternary operator:
    We use this only when there is a single line of code in if an else.
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age>=18? printf("You are an adult.") : printf("You are not an adult.");
    */


    int marks;
    printf("Enter your marks; ");
    scanf("%d", &marks);
    if(marks>90 && marks<=100){
        printf("Your grade is: A+ \n");
    }
    else if(marks>80 && marks<=90){
        printf("Your grade is: A \n");
    }
    else if(marks>70 && marks<=80){
        printf("Your grade is: B+ \n");
    }
    else if(marks>60 && marks<=70){
        printf("Your grade is: B \n");
    }
    else if(marks>50 && marks<=60){
        printf("Your grade is: C \n");
    }
    else if(marks>40 && marks<=50){
        printf("Your grade is: D \n");
    }
    else if(marks>30 && marks<=40){
        printf("Your grade is: E \n");
    }
    else if(marks<=30){
        printf("Your grade is: Fail \n");
    }
    else{
        printf("Invalid input"); 
    }

    /*
    ////Switch condition
    int day; //1-monday 2-tue and so on
    //We can also take characters like alphabets in ''
    //We can use switch inside switch also. This is called nested switch.
    printf("Enter day(1-7): ");
    scanf("%d", &day);

    switch (day){
        case 1 : printf("Monday \n");
                break;
        case 2 : printf("Tuesday \n");
                break;
        case 3 : printf("Wednesday \n");
                break;
        case 4 : printf("Thursday \n");
                break;
        case 5 : printf("Friday \n");
                break;
        case 6 : printf("Saturday \n");
                break;
        case 7 : printf("Sunday \n");
                break;
        default: printf("Invalid input.");
    }
    */

    //Check if the character is upper case or lower case.
    char ch;
    printf("ENter the character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("LowerCase");
    }
    else if (ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an English alphabet.");
    }
    }