#include <stdio.h>
void print (int **,int, int);
int main(){
    // char arr[10]={'a','b','c','d','e'};
    // for (int i=0;i<10;i++){
    //     printf("%c\t",arr[i]);
        
    // }
    // printf("\n");
    // int a=arr[6]+10;
    // printf("%d",a);
    // printf("\n");
    // for (int i=0;i<10;i++){
    //     printf("%u\t",&arr[i]);
        
    // }

    // char c='A';
    // printf("%d",c);
    // int d=65;
    // printf("%c",d);


    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3, n=3;
    print((&arr),m,n);
}

void print( int **arr, int m,int n){
    int i,j;
    for(i=0;i<3;i++){
        for( j=0;j<3;j++)
        {
            printf("%d\n",*(*(arr+i)+j));
            // printf("%d\n",*(*(arr+1)+1));

        }
    }
    return;
}



/****int
arr [3][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){

printf("\n Data at *( arr+i )+j: %d ",*(*(arr+i)+j));
//  = % arr+i )+
// printf
// n Data at *( arr+i+j ) = % arr+i+j

}
}
return 0;
} *****/


