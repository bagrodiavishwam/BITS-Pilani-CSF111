#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter the number whose factorial is to be calculated: \n");
    scanf("%d",&n);
    int f=1;
    while(n>0){
        f=f*n;
        n--;
    }
    printf("The final value is : \n %d",f);
    return 0;
}