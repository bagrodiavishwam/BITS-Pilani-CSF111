#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[]={4,5,6,7,8,9};
    int *ptr;
    ptr=a;
    printf("%d\n",sizeof(ptr));
    printf("%p\n",ptr);
    printf("%X",ptr);
}