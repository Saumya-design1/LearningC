#include<stdio.h>
/*
int main(){
    // char name[] = {'S', 'a', 'm', 'u', 'm', 'y' 'a', '\0'};
    // char lang[] = {'C', ' ', 'f','r','o','m', ' ', 'A','p','n','a', ' ', 'C', 'o', 'l', 'l', 'e', 'g', 'e', '\0'};

    //below is a better and easier way
    char name[]= "Saumya";
    char lang[]= "C - Apna College ";
    printf("%s is studying %s", name, lang);

    char fname[40];
    printf("Enter your name: ");
    scanf("%s", fname);
    printf("Your name is:%s", fname);
    
    return 0;
}
*/

//-----------------------------------------------------------------------

/*
void printString(char arr[]);

int main(){
    char firstname[]= "Saummya";
    char lastname[]= ".";
    printString(firstname);
    printString(lastname);
    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i] != '\0' ; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
*/

//-----------------------------------------------------------------------

/*
//scanf() cannot input multi-word strings with spaces.
// For this situation we use gets(str){input a multiword string}, puts(str){output a string} and advanced version of gets() ie fgets(str, n, file){stops when n-1 chars input or new line is entered}.
int main(){
    char str[100];
    printf("Enter your name: ");
    // gets(str);
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}
*/

//-----------------------------------------------------------------------

/*
//Strings are arrays and arrays are pointers do strings are also pointers.
// When we declare strings as pointers we can reinitialise/modify it but when we use array to declare a strings we cannot reinitialise/modify it.
int main(){
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello World of C";
    puts(canChange);

    char cannotChange[] = "Saumya";
    puts(cannotChange);
    // cannotChange = "Hi"; this will show error

    return 0;
}
*/

//-----------------------------------------------------------------------

/*
//Make a program that inputs user's name and prints its length without using <string.h> .
int getLength(char name[]);

int main(){
    char name[100];
    fgets(name, 100, stdin);

    printf("Length is %d", getLength(name));

    return 0;
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count-1;
}
*/

//-----------------------------------------------------------------------

/*
#include<string.h>

int main(){
    //strlen - count the number of characters excluding '\0'
    // char name[]= "Sophie";
    // printf("Length is : %d", strlen(name));

    //strcpy - copies value of old string to newstring
    // char oldstr[]= "oldstr";
    // char newstr[]= "newstr";
    // strcpy(newstr, oldstr);
    // puts(newstr);

    //strcat - concatenates first string with second string
    // char str1[100] = "Hello ";// here the string size has to be defined otherwise it will show an error. the size has to >= to length of str1+ length of str2.
    // char str2[] = "World";
    // strcat(str1, str2);
    // puts(str1);
    
    //strcmp - compares 2 strings and returns a value
    // 0 --> strings are equal
    // positive --> first string is greater than second(ASCII)
    // negative --> second string is greater than second(ASCII)
    char fstr[] = "Apple";
    char sstr[] = "Banana";
    printf("%d\n", strcmp(fstr, sstr));
    printf("%d\n", strcmp(sstr, fstr));

    return 0;
}
*/

//-----------------------------------------------------------------------

#include<string.h>
/*
//Find the salted form of a password entered by user if the salr is "123" and added at the end.
void salting(char password[]);

int main(){
    // char pw[50];
    // printf("Enter your password: ");
    // scanf("%s", pw);
    // char salt[] = "123";
    // strcat(pw, salt);
    // puts(pw);

    char password[100];
    scanf("%s", password);
    salting(password);

    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}
*/

//---------------------------------------------------------------------

/*
void slice(char str[], int n, int m);

int main(){
    char str[] = "HelloWorld";
    slice(str, 3,6);
    return 0;
}

void slice(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for (int i = n; i <=m; i++, j ++){
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}
*/

//---------------------------------------------------------------------

//Write a func to count the occurence of vowels in a string.
int vowels(char str[]);

int main(){
    char str[] = "hello world";
    printf("Vowels in it: %d", vowels(str));
}

int vowels(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}