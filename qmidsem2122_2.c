#include<stdio.h>
#include <math.h>
int main(){
    int n,a=0;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n%2==0){
        printf("The number %d is even.",n);
        return 0;
    }
    printf("The number %d is odd.\n",n);

    int bin=0,cpy=n;
    while(n>0)
    {
        bin=(bin*10)+(n%2);
        n/=2;
    }
    n=0;
    while(bin>0){
        a=bin%10;
        n=(n*10)+a;
        bin/=10;
    }
    bin=n;
    a=bin%10;
    bin/=10;

    // if(a==0)
    //     bin=(bin*10)+1;
    // else
        bin=(bin*10);
   
    n=bin;
    int num=0;

    for(int i=0;n>0;i++)
    {
        a=n%10;
        num=num+(a*((int)(a*(pow(2,i)))));
        n=n/10;
    }
// printf("%d",num);//check

if(num>cpy){
    printf("THe editted number is: %d",num);
    return 0;
}
n=bin;
for(int i=0;n>0;i++){
    a=n%10;
    if(a==0 && i!=0){
        bin=bin+(pow(10,i));
        num=num+(pow(2,i));
        break;
    }
    
    n=n/10;
}
// printf("%d",num);//check
printf("THe editted number is: %d",num);
}

