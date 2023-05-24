 #include <stdio.h>
 float factorial(int n);
 int main(){
     int n;
    printf("Enter the number whose factorial is to be calculated: \n");
    scanf("%d",&n);
    float f=factorial(n);
    printf("The value of the calculted factorial is : %f",f);
    return 0;

 }

 float factorial(int n){
     if(n==1){
         return 1.0;
     }
    
         return n*factorial(n-1);
     
 }