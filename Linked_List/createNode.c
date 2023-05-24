#include <stdio.h>
#include "createnode.h"
NODE createNode(){
        NODE nd;
        nd=malloc(sizeof(*nd));
        printf("Enter the element of the node: ");
        scanf("%d",&(nd->ele));
        nd->p=NULL;
        return nd;
}