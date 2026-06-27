#include<stdio.h>

int main(){
    // i = i+1 is same as i +=1 and this is also same as i ++
    for(int i = 1; i<=5; i += 1){
        printf("%d\n",i);
    }

    printf("\n\n");
    /* increment operator
        i++ use, then increase(post increment operator)
        ++i increase, then use(pre increment operator)

        decrement operator
        i-- use, then decrease(post decrement operator)
        --i decrease, then use(pre decrement operator)
    */

    for(int j = 10; j>=0; j -= 1){
        printf("%d\n",j);
    }

    printf("\n\n");

    for(float k = 0.0; k<=2.0; k +=0.1){
        printf("%f \n", k);
    }

    printf("\n\n");

    for(char ch='a'; ch<='z'; ch++){
        printf("%c \n", ch);
    }
    return 0;
}