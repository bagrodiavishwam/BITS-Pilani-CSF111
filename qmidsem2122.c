#include<stdio.h>
#include <math.h>
int main(){
    int n,a;
    printf("Enter the number: \n");
    scanf("%d",&n);
    int num=n;
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
    printf("%d\n",bin);//check
    //inverting obtained binary to get reqd binary
    n=0;
    while(bin>0){
        a=bin%10;
        n=(n*10)+a;
        bin/=10;
    }
    bin=n;
    n=bin%10;
    bin/=10;
    int ne;
    if(n==0)
        bin=(bin*10)+1;
    else
        bin=(bin*10)+0;
     printf("%d\n",bin);//check
    int cpy2=bin;
     for(int i=0;cpy2>0;i++){
         n=cpy2%10;
         ne=n*((int)pow(2,i));
         cpy2/=10;
     }
     printf("%d",ne);
     if(ne>=num){
         printf("Changed number: %d \n",ne);
         return 0;
     }
    cpy2=bin;
    cpy/=10;
    for(int i=1;cpy2>0;i++){
         n=cpy2%10;
         if(n==0){
             n=1;
             bin=bin+((int)pow(10,i));
             printf("%d",bin);//check
             ne+=(int)(pow(2,i));
             break;
        cpy/=10;
         }
         printf("%d\n",bin);//check
    }
    printf("\n Changed number: %d \n",ne);
    return 0;

    }
   


