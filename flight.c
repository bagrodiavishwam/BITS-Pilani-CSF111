#include <stdio.h>
int main(){
    int d,a;
    float base,sur,cost;
    printf("Select Depatrure city according to the legend \n 1: Delhi \n 2: Mumbai\n 3: Pune\n 4: Bangalore\n");
    scanf("%d",&d);
    printf("Select Arrival city according to the legend \n 1: Delhi \n 2: Mumbai\n 3: Pune\n 4: Bangalore\n");
    scanf("%d",&a);
    if(d==a){
        printf("Invalid route. Departure and arrival city cannot be the same.");
    }
    else{
    switch(d){
        case 1:
            if(d==1){
            switch(a){
            case 2:
                sur=0.2;
                base=5000;
                printf("Your route is 1: Delhi to 2: Mumbai with base %f and surcharge of %f times base\n", base, sur);
                break;
            case 3:
                sur=0.1;
                base=6000;
                printf("Your route is 1: Delhi to 3: Pune with base %f and surcharge of %f times base\n", base, sur);
                break;
            case 4:
                sur=0.25;
                base=7000;
                printf("Your route is 1: Delhi to 4: Bangalore with base %f and surcharge of %f times base\n", base, sur);
                break;
        break;
           }
        }

        case 2:
        if(d==2){
        switch(a){
            case 1:
                sur=0.3;
                base=5000;
                printf("Your route is 2: Mumbai to 1: Delhi with base %f and surcharge of %f times base\n", base, sur);
                break;
            case 3:
                sur=0.2;
                base=4000;
                printf("Your route is 2: Mumbai to 3: Pune with base %f and surcharge of %f times base\n", base, sur);
                break;
            
            case 4:
                sur=0.25;
                base=6000;
                printf("Your route is 2: Mumbai to 4: Bangalore with base %f and surcharge of %f times base\n", base, sur);
                break;
        break;
        }
        }
        case 3:
            if(d==3){
            switch(a){
            case 1:
                sur=0.3;
                base=4000;
                printf("Your route is 3: Pune to 1: Delhi with base %f and surcharge of %f times base\n", base, sur);
                break;
            case 2:
                sur=0.3;
                base=4000;
                printf("Your route is 3: Pune to 2: Mumbai with base %f and surcharge of %f times base\n", base, sur);
                break;
            case 4:
                sur=0.3;
                base=6000;
                printf("Your route is 3: Pune to 4: Bangalore with base %f and surcharge of %f times base\n", base, sur);
                break;
            break;
         }
            }
        case 4:
            if(d==4){
            switch(a){
            case 1:
                sur=0.24;
                base=5000;
                printf("Your route is 4: Bangalore to 1: Delhi with base %f and surcharge of %f times base\n", base, sur);
                break;
            case 2:
                sur=0.3;
                base=6000;
                printf("Your route is 4: Bangalore to 2: Mumbai with base %f and surcharge of %f times base\n", base, sur);
                break;
            case 3:
                sur=0.2;
                base=8000;
                printf("Your route is 4: Bangalore to 3: Pune with base %f and surcharge of %f times base\n", base, sur);
                break;
            }
            }
    }
    
    

    cost=base+(sur*base);
    printf("The final cost of the ticket for your route is : %f",cost);
    return 0;
}

}



    
