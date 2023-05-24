#include <stdio.h>
void foo(int[], char[]);
int main(){
    int arr[] = {10,20,45,67,68};
    printf("Sizeof(arr) = %lu\n", sizeof(arr));
    foo(arr,"hello world");
    return 0;
}

void foo(int a[], char str[]){
    printf("Sizeof(arr) = %lu\n", sizeof(a));
    printf("%p",a);
}