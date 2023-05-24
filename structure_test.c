#include <stdio.h>
struct Abc{
        char a;
        struct Xyz{
            int p;
            short q;
            char c;
        }x;

        }l;
        struct Xyz{
            short q;
            char c;
            
            int p;
            
        }k;
void main(){
    
        printf("%lu\n",sizeof(l));
        printf("%lu",sizeof(k));
        return;
    }
