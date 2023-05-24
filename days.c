#include <stdio.h>
int main(){
    int n;
    printf("Enter then number of days");
    scanf("%d",&n);
    int years=n/365;
    n=n%365;
    int months=n/30;
    int days=n%30;
    printf("There are %d year(s), %d month(s), and %d day(s)", years, months, days);
}