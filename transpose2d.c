#include <stdio.h>
#include <stdlib.h>
#define print(x) printf("%d",x)
void function(int *);

int main(void){
    int n=0,m=0;
    printf("enter the number of rows  \t");
    scanf("%d",&m);
    printf("\nenter the number of columns\t");
    scanf("%d",&n);
    printf("\n input original matrix: \n");
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            print(a[i][j]);
        }
        printf("\n");
    }


}