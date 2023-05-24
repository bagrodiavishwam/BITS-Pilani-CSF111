#include <stdio.h>
int main (){
    int a,b,x=0;
    char c;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf(" %d",&b);
    printf("Enter one out of the following operations: +,-,*,/,%%\n");
    scanf(" %c",&c);
    switch (c){
        case '+':
        x=a+b;
        break;

        case '-':
        x=a-b;
        break;

        case '*':
        x=a*b;
        break;

        case '/':
        x=a/b;
        break;

        case '%':
        x=a%b;
        break;

        default:
        printf("Invalid operator input");
        c='a';

    }
    if(c!='a')
        printf("The final value is: %d",x);
}

