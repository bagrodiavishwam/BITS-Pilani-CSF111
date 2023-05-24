#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,count=0,a=0,b=0;
    while(1)
    {
    printf("Enter a number that has atleast 5 digits: \n");
    scanf("%d",&n);
     if(n/10000>0)
        break;
    else{
        printf("INVALID INPUT. Input must conatin atleast 5 digits!");
        continue;
    }
    }
    b=n%10;
    n/=10;
    count++;
    
    while(n>0){
        a=n%10;
        if(a>b)
            count++;
        b=a;
        n/=10;
    }
    printf("%d",count);
}