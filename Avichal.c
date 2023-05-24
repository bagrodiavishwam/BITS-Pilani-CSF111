#include <stdio.h>
#include <math.h>
int compute_sum(int );
int power (int );
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    int x= compute_sum(num);
    printf("Sum:  %d",x);
    return 0;
}

int power (int a){
    int num;
    num=pow(a,a);
    return num;
}

int compute_sum(int a){
    int b=0;
    for(int i=a;i>=1;i--){
        b=b+power(i);
    }
    return b;
}