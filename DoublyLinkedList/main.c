#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node *next;
};
void display(struct Node *);
int SizeOfList(struct Node *);
struct Node * createList(struct Node * );
struct Node * addToEmpty(struct Node * , int );
struct Node * addAtBeg(struct Node * ,int );
struct Node * addAtEnd(struct Node * , int);
struct Node * addAfter(struct Node *  , int , int);
struct Node * addBefore(struct Node *  , int , int);
struct Node * del(struct Node *, int);
int SizeOfList(struct Node *ptr){
    int count = 0;
    struct Node *np = ptr->next;
    while(np != ptr->next){
        count = count+1;
        printf("%d  ",count);
        np = np->next;
    }
    return count;
}
struct Node * addBefore(struct Node * last , int value, int New){
    struct Node *np;
    if(last->Data==value){
        np = malloc(sizeof(struct Node));
        np->Data = New;
        np->next = last;
        return np;
    }else{
        np = malloc(sizeof(struct Node));
        np->Data = New;
        struct Node *preptr,*ptr;
        preptr = last;
        ptr = last->next;
        while(ptr!=NULL){
            if(ptr->Data==value){
                np->next = ptr;
                preptr->next = np;
                return last;
            }
            preptr = preptr->next;
            ptr = ptr->next;
        }
    }
}
struct Node * createList(struct Node * last){
    int n , value ,i;
    printf("How many Element's you want to Insert : ");
    scanf("%d",&n);
    printf("Enter The First Element : ");
    scanf("%d",&value);
    last = addToEmpty(last , value);
    for(i = 1 ; i < n ; i++){
        printf("Enter The %d Element : ",i+1);
        scanf("%d",&value);
        last = addAtEnd(last , value);
    }
    return last;
}
struct Node * del(struct Node * last , int value ){
    struct Node *t, *n;
    if(last==NULL){
        printf("List is Empty\n");
        return last;
    }
    if(last->next == last && value == last->Data){
        t = last;
        last = NULL;
        free(t);
        return last;
    }
    if(last->next->Data == value){
        t = last->next;
        last->next = t->next;
        free(t);
        return last;
    }
    n = last->next;
    t = n->Data;
    while(n->next!=last){
        if(n->next->Data == value ){
            t = n->next;
            n->next = t->next;
            free(t);
            return last;
        }
        n=n->next;
    }
    if(last->Data == value){
        t = last;
        n->next = last->next;
        last = n;
        free(t);
        return last;
    }
    printf("%d is not in the list",value);
    return last;
}
struct Node * addAfter(struct Node * last , int value , int New){
    struct Node * n;
    struct Node * t = last->next;
    do{
            if(t->Data == value){
                n = malloc(sizeof(struct Node));
                n->Data = New;
                n->next = t->next;
                t->next = n;
                if(t==last){
                    last = n;
                }
                printf("After Insertion List.\n");
                return last;
            }
            t = t->next;
    }while(t!=last->next);
    printf("%d is not in the List!\n",value);
    return last;
}
struct Node * addAtEnd(struct Node * last , int value){
    struct Node *n;
    n = malloc(sizeof(struct Node));
    n->Data = value;
    n->next = last->next;
    last->next = n;
    last = n;
    return last;
}
struct Node * addToEmpty(struct Node * last , int value){
    struct Node * n;
    n = malloc(sizeof(struct Node));
    n->Data = value;
    last = n;
    last->next = n;
    return last;
}
struct Node * addAtBeg(struct Node * last,int value){
    struct Node * n;
    n = malloc(sizeof(struct Node));
    n->Data = value;
    n->next = last->next;
    last->next = n;
    return last;
}
void display(struct Node *last){
    if(last == NULL ){
        printf("List Is Empty!");
    }else{
        struct Node *t = last->next;
        do{
            printf("%d ",t->Data);
            t = t->next;
        }while(t!=last->next);
    }
    printf("\n");
}
void main(){
    int ch , var , loop;
    loop = 1;
    struct Node *last;
    last = createList(last);
    while(loop){
        printf("Menu\n");
        printf("1. Add Element at Beginning.\n");
        printf("2. Add Element at the End.\n");
        printf("3. Add Element After Any Element.\n");
        printf("4. Add Element Before Any Element.\n");
        printf("5. Delete Element.\n");
        printf("6. Count Number of Element's.\n");
        printf("7. Exit.\n");
        printf("Enter The Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter The Element you want to Add : ");
                scanf("%d",&var);
                last = addAtBeg(last , var);
                printf("After Insertion List.\n");
                display(last);
                break;
            case 2:
                printf("Enter The Element you want to Add : ");
                scanf("%d",&var);
                last = addAtEnd(last , var);
                printf("After Insertion List.\n");
                display(last);
                break;
            case 3:
                printf("Enter the Element After you want to insert : ");
                scanf("%d",&ch);
                printf("Enter The Element you want to Add : ");
                scanf("%d",&var);
                last = addAfter(last , ch ,var);
                ch = 0;
                display(last);
                break;
            case 4:
                printf("Enter the Element before which you want to insert : ");
                scanf("%d",&ch);
                printf("Enter The Element you want to Add : ");
                scanf("%d",&var);
                last = addBefore(last , ch ,var);
                ch = 0;
                display(last);
                break;
            case 5:
                printf("Enter The Element you want to Delete : ");
                scanf("%d",&var);
                last = del(last , var);
                printf("After Deletion List.\n");
                display(last);
                break;
            case 6:
                printf("Calculating......\n");
                int num = SizeOfList(last);
                printf("Number of Element in a List = %d\n",num);
                display(last);
                break;
            case 7:
                printf("After All Operations list will be.\n");
                display(last);
                exit(0);
            }
        printf("Want to Continue...\n");
        printf("1 .Yes\n2 .No\n");
        printf("Enter Your Choice : ");
        scanf("%d",&loop);
        if(loop == 2){
            printf("After All Operations list will be.\n");
            display(last);
            exit(1);
        }
    }
}
