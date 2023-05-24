#include <stdio.h>

//linear search
int linearsearch(){
    int n,x;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in the array");
    for(int i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("Enter the element reqd: ");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(a[i]==x)
            return 1;
    }
    return -1;
}
//Binary search
int binarysearch(){
    int n,x,t;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in the array");
    for(int i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("Enter the element reqd: ");
    scanf("%d",&x);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    int mid,lb,ub;
    lb=0;
    ub=n;
    mid=(lb+ub)/2;
    while(lb<ub){
        mid=(lb+ub)/2;
        if(x==a[mid])
            return 1;
        
        if(x>a[mid]){
            lb=mid;
            ub=ub;
            
        }
        else if(x<a[mid]){
            ub=mid;
            lb=lb;
            
        }

    }
    return -1;
}

//bubble sort
void bubblesort(){
    int n,t;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in the array");
    for(int i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&a[i]);
        printf("\n");
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}

int main(){
    int n;
    printf("Enter 1: Linear Search, 2: Binary Search, 3: Bubble Sort, 4: Exit \n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        n=linearsearch();
        printf("%d",n);
        break;

        case 2:
        n=binarysearch();
        printf("%d",n);
        break;

        case 3:
        bubblesort();
        break;

        case 4:
        return 0;


        default:
        printf("No matching case found");

        
    }
    return 0;
}