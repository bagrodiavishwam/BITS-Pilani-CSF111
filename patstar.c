#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d",&n);
    for(int i=0;i<(2*n)-1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        printf("*");
        for(int j=i;j<((2*n)-3-i);j++){
                printf(" ");

        }
        if(i!=n-1)
            printf("*");
        printf("\n");
    }

}