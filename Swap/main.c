#include <stdio.h>
#include <stdlib.h>

struct Node{
    int Data;
    struct Node *next;
};
struct Node * createList(struct Node *);
struct Node * addAtEnd(struct Node * , int);
struct Node * addToEmpty(struct Node * , int);
struct Node * Swap(struct Node * start , int , int );
struct Node * createList(struct Node *start){
    int n , value ,i;
    printf("How many Element's you want to Insert : ");
    scanf("%d",&n);
    printf("Enter The First Element : ");
    scanf("%d",&value);
    start = addToEmpty(start , value);
    for(i = 2 ; i <= n ; i++){
        printf("Enter The %d Element : ",i);
        scanf("%d",&value);
        start = addAtEnd(start , value);
    }
    return start;
}
struct Node * addAtEnd(struct Node *start , int value){
    struct Node *ptr = start;
    struct Node *np;
    if(ptr == NULL)
        start = addToEmpty(start,value);
    else{
        np = malloc(sizeof(struct Node));
        if(np!=NULL){
            np-> Data = value;
            np->next = NULL;
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = np;
        }
    }
    return start;
}
struct Node * addToEmpty(struct Node * start , int value){
    struct Node *n;
    n = malloc(sizeof(struct Node));
    n->Data = value;
    n->next = NULL;
    start = n;
    return start;
}
struct Node * Swap(struct Node * start , int a , int b){
    Node *temp;
    Node *anp = start;
    Node *bnp = start;
    while(anp->next->Data!=a){
        anp = anp->next;
    }
    while(bnp->next->data!=b){
        bnp = bnp->next;
    }
    temp = anp;
}
int main() {

}
