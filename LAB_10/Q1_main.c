#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int rows= atoi (argv[1]);//taking number of rows in terminal, converting it to int 
    int n[rows];//array of the number of elements in a row
    int * p[rows];//pointer pointing to the dynamically created array
    for(int i=0;i<rows;i++){
        n[i]=atoi(argv[2+i]);//taking in the number of elements in the array
        p[i]=(int*)calloc(n[i],sizeof(int));//dynamic array
    }
    printf("Enter the value of the elements in the array\n");

    for(int i=0;i<rows;i++){
        for(int j=0;j<n[i];j++){
            scanf("%d",&((p[i])[j]));
        }
    }

    printf("printing original array: ");

    for(int i=0;i<rows;i++){
        for(int j=0;j<n[i];j++){
            printf("%d",p[i][j]);
        }
    }

}
