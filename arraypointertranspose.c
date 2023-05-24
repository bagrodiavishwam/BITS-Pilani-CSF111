#include <stdio.h>
void transpose (int,int, int *[]);

void main(void){
    int m,n;
    printf("enter number of rows:  ");
    scanf("%d",&m);
    printf("enter number of columns:  ");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter elements of the original matrix:  ");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }
printf(" original matrix:  \n");
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",*(*(arr+i)+j));
        }
        printf("\n");
    }

    transpose(m,n, &arr[n]);
}

void transpose (int m,int n, int* arr[n]){
    int temp;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp=*(*(arr+i)+j);
            *(*(arr+i)+j)=*(*(arr+j)+i);
            *(*(arr+j)+i)=temp;
        }
    }
    printf(" transposed matrix:  \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",*(*(arr+i)+j));
        }
        printf("\n");
    }

}
