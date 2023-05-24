#include <stdio.h>
int main(){

    int n;
    printf("Enter the time in 24-hour format: \n ");
    scanf("%d", &n);
    int min=n%100;
    int h=n/100;
    int t=1;
    if(min>=60){
         printf("Invalid input of time");
    }
    else{
       
if (h-12>0){
    t=1;
    h-=12;
}
else if(h-12==0 && min==0){
    t=2;
}
else if(h-12<0){
    t=0;
}

if(h==0 && min==0){
        printf("The input time is 12 midnight");
}
else if(t==2){
    printf("The input time is 12 noon");
}
else if(t==1){
    if(min-10<0){
    printf("The input time is %d : 0%d p.m.",h,min);
    }
    else{
         printf("The input time is %d : %d p.m.",h,min);
    }

    
}
else{
     if(min-10<0){
    printf("The input time is %d : 0%d a.m.",h,min);
    }
    else{
         printf("The input time is %d : %d a.m.",h,min);
    }
}
    }
}