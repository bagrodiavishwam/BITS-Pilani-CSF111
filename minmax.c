/** Write a C function to return minimum and maximum in an array. Your program should make the minimum number of comparisons. 
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,min,max;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter values in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    min=max=a[0];
    // if(n==1)
    //     max=min=a[0];
    for(int i=0;i<n;i++){
        if(n==1)
            break;
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Max: %d \nMin: %d",max,min);
    }
