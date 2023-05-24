#include <stdio.h>
int main(){

  int a,b;
  printf("Enter the base \n");
  scanf("%d", &a);
  printf("Enter the power \n");
  scanf("%d", &b);
  // printf("hello %d", );
  int f=1;
  while(b>0){
    f=f*a;
    b--;
  }
  printf("Final Value: %d",f);
return 0;
}