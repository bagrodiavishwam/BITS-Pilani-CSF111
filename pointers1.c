#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int age=21;
    int *ptr=&age;
    int* ptr1=&age;
    int _age= *ptr;
    printf("%d",ptr);
    return 0;
}