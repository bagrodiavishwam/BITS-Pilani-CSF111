#include <stdio.h>
int main(){
    int n,j=0;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for( j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        for(j=0;j<i;j++){
            printf("*");
    }
    printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf(" ");

        for(j=0;j<n-i-1;j++)
            printf("*");
        
        for(j=0;j<n-i-2;j++)
            printf("*");
        
        printf("\n");
    }
}