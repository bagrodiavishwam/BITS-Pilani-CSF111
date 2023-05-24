#include <stdio.h>
int main(){
    int n,rev=0;
    printf("Enter the number to be reversed \n");
    scanf("%d",&n);
    // int copy =n;
    while(n>0)
        {
            int a= n%10;
            rev=(rev*10)+a;
            n/=10;
        }
        printf("The reversed number is : %d",rev);
    }