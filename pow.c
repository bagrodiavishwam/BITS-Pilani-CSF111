#include <stdio.h>
 float power(int a, int b);
 int main(){
    int a,b;
    printf("Enter the value of the base");
    scanf("%d", &a);
    printf("Enter the value of the power");
    scanf("%d", &b);
   float f=power(a,b);
   printf("Final Value: %f",f);
 }

 float power(int a, int b){
     if(b==1){
         return a;
     }
    
     return a*power(a,b-1);
 }