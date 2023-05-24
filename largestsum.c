#include <stdio.h>
int main(){
    int a[4],temp=0,max=0;
    printf("Enter the four values:\n" );
    for(int i=0;i<4;++i){
        scanf(" %d",&a[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[j]>=a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    max=a[0]+a[1];
    printf("The largest sum is: %d + %d = %d",a[0],a[1],max);
}
