#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers to be swapped, such that first number is larger\n");
    scanf("%d %d",&a,&b);
    a+=b;
    b=a-b;
    a=a-b;

    printf("The Swapped numbers are: %d %d", a,b);
}