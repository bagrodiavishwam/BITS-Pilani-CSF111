#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c=0;
    printf("%d\t",a);
    printf("%d\t",b);
    for(int i=0;i<n-2;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d \t",c);
        return 0;
    }
}
 