#include <stdio.h>
void print (int *,int,int);
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3, n=3;
    print(&arr,m,n);
    return 0;
}

void print(int *ar, int m, int n)
{
    int i,j;
    int **arr=&ar;
    for(i=0;i<3;i++){
        for( j=0;j<3;j++)
        {
            printf("%d\n",*(*(arr+i)+j));
            // printf("%d\n",*(*(arr+1)+1));

        }
    }
    return;
}
