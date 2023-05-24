#include <stdio.h>
/** int main(){
    int *ptr=&ptr;
    int**pptr=&ptr;
    printf("%p\n",ptr);
    printf("%p",pptr);
} */


// int main() 
// { 
//    int a; 
//    char *x; 
//    x = (char *) &a; 
//    a = 512; 
//    x[0] = 1; 
//    x[1] = 2; 
//    printf("%dn",a);   
//    return 0; 
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int *ptr1 = arr;
//     int *ptr2 = arr + 5;
//     printf("Number of elements between two pointer are: %d\n", (ptr2 - ptr1));
//     printf("Number of bytes between two pointers are: %d\n",  (char*)ptr2 - (char*) ptr1);
//     printf("%d\n",ptr1);
//     printf("%d\n",ptr2);
//     printf("%d\n",ptr1);
//     printf("%d\n",(char*)ptr2);
//     printf("%u",(char*)ptr2);
    
//     return 0;
// }

// #include <stdio.h>
int main()
{
 int arr[10] = {22,54,78,32,83,45,90,54,75,28};
 int * ptr = arr;
 printf("%d\n", *(ptr++));
 ptr = arr;
 printf("%d\n", *ptr++);
 ptr = arr;
 printf("%d\n", *++ptr);
 ptr = arr;
 printf("%d\n", *ptr+5);
 ptr = arr;
 printf("%d\n", --*ptr);
 return 0;
}