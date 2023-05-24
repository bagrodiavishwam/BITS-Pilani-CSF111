#include <stdio.h>
#include <stdio.h>

typedef struct node *NODE;
typedef struct linkedlist *LIST;

//defining the node of the linked list    
struct node {
        int ele;
        struct node * p;
    };
   
//defining the head of the linked list
struct linkedlist {
        int count;
        struct node * head;
    };

int main(){
   
    int n;
    printf("Program will terminate on printing list or input of incorrect option");
    LIST l=createList();
    while(1){
        printf("Enter 1: Add Node to Beginning \n Enter 2: Add Node to End\n");
        printf("Enter 3: Delete Node to Beginning \n Enter 4: Delete Node to End\n");
        printf("Enter 5: print list\n");
        printf("Enter Option of choice \n");
        scanf("%d", &n);
        switch(n){
            case 1:
                NODE n1 = createNode();
                insertNodeBeg(l,n1);
                break;
            case 2:
                NODE n1 = createNode();
                insertNodeEnd(l,n1);
                break;
            case 3:
                deleteNodeBeg(l);
                break;
            case 4:
                deleteNodeEnd(l);
                break;
            case 5:
                print(l);
                return 0;
            default:
            return 0;
    }
    }
    return 0;
    }



LIST createList (){
    LIST l;
    l=malloc(sizeof(*l));
    l->count=0;
    l-> head=NULL;
    return l;
}

NODE createNode(){
        NODE nd;
        nd=malloc(sizeof(*nd));
        printf("Enter the element of the node: ");
        scanf("%d",&(nd->ele));
        nd->p=NULL;
        return nd;
}

void insertNodeBeg(LIST l, NODE nd){
    if (l->count==0){
    l->head = &nd;
    nd->p=NULL;
   
    }
    else{
        nd->p = l->head;
        l->head = &nd;

    }
l->count++;
   
}

void inserNodeEnd(LIST l, NODE nd){
    int t=0;
    NODE temp;
    temp->p=l->head;
   
    if (l->count==0){
    l->head = &nd;
    nd->p=NULL;
    }
    else{

    while(temp->p != NULL){
        temp=temp->p;
    }
    temp->p = & nd;
    nd->p=NULL;
    l->count ++;
    }

}

void deleteNodeBeg(LIST l){
    NODE temp;
    temp->p=l->head;
    if (l->count==0){
        printf("No Node present to be deleted");
        return;
    }
    else
        temp=temp->p;
     
     l->head=temp->p;
     temp->p=NULL;
     free(temp);
 l->count --;
}

void deleteNodeEnd(LIST l){
    NODE temp, prev;
    temp->p=l->head;
    if (l->count==0){
        printf("No Node present to be deleted");
        return;
    }
    else{
        while(temp->p != NULL){
       prev=temp;
       temp=temp->p;
       }
   
     prev->p=NULL;
     free(temp);
     l->count--;
    }
}

 void print(LIST l){
     NODE temp;
     temp->p=l->head;
    while(temp->p != NULL){
        temp=temp->p;
         printf("%d \t", temp->ele);
    }
}
