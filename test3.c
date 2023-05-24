
#include <ctype.h>
// int main(){
    // char c[5]={'a','b','c','d'};
    // for(int i=0;i<7;i++){
    //     printf("%c\t", toupper(c[i]));
    // }

    // int arr[5]={7};
    // // arr[0]=-1;
    // for(int i=0;i<5;i++){
    //     printf("%d\t", arr[i]);
    // }
    // int a=5;
    // float b=(float)a;
    // printf("%f \n",b);
    // if(a==b)
    //     printf("Yes");
    // else 
        // printf("No");
 /*********   
// int a = 2;
// void f1();
// void main() {
// f1();
// int a = 5;
// printf("a = %d",a);
// }
// void f1(){
// printf("a = %d\n",a); 
// int a=4;
// printf("a = %d\n", a);}
*********/
#include <stdio.h>
#define ACCURACY 0.0001
int main(){
int n, count,term;
float x, sum;
printf("Enter value of x: ");
scanf("%f", &x);
n = term = sum = count = 1;
while(n<=4){
term = term * x / n;
sum = sum + term;
count++;
if(term<ACCURACY)
n = 999;
else
n++;
}
printf("%d %d",count,sum);

}

