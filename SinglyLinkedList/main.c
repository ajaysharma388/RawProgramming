#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node *next;
};
void display(struct Node *);
int SizeOfList(struct Node *);
int SearchList(struct Node *,int);
struct Node * createList(struct Node * );
struct Node * addToEmpty(struct Node * , int );
struct Node * addAtBeg(struct Node * ,int );
struct Node * addAtEnd(struct Node * , int);
struct Node * addAfter(struct Node *  , int , int);
struct Node * addBefore(struct Node *  , int , int);
struct Node * del(struct Node *, int);
int SearchList(struct Node *start , int item){
    int index = 1;
    struct Node *ptr = start;
    while(ptr!=NULL){
        if(ptr->Data == item)
            return index;
        ptr = ptr->next;
        index++;
    }
    return -1;
}
int SizeOfList(struct Node *start){
    int count = 0;
    struct Node *np = start;
    while(np != NULL){
        count++;
        np = np->next;
    }
    return count;
}
struct Node * addBefore(struct Node *start , int value, int New){
    struct Node *np;
    if(start->Data == value){
        np = malloc(sizeof(struct Node));
        np->Data = New;
        np->next = start;
        return np;
    }else{
        struct Node *preptr,*ptr;
        preptr = start;
        ptr = start->next;
        while(ptr!=NULL){
            if(ptr->Data==value){
                np = malloc(sizeof(struct Node));
                np->Data = New;
                np->next = ptr;
                preptr->next = np;
                return start;
            }
            preptr = preptr->next;
            ptr = ptr->next;
        }
    }
    printf("The Node With The Data %d Is Not Found!\n",value);
    return start;
}
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
struct Node * del(struct Node *start , int value ){
    struct Node *t;
    if(start==NULL){
        printf("List is Empty\n");
        return start;
    }
    if(start->Data==value){
        t = start;
        start = t->next;
        free(t);
        return start;
    }
    t = start;
    struct Node *n = start->next;
    while(n!=NULL){
        if(n->Data == value){
            t->next = n->next;
        }
        t = t->next;
        n = n->next;
    }
    return start;
}
struct Node * addAfter(struct Node *start , int value , int New){
    struct Node * n;
    struct Node * t = start;
    while(t!=NULL){
        if(t->Data == value){
            n = malloc(sizeof(struct Node));
            n->next = t->next;
            n->Data = New;
            t->next = n;
            return start;
        }
        t = t->next;
    }
    printf("%d is not in the List!\n",value);
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
struct Node * addAtBeg(struct Node * start,int value){
    struct Node * n;
    n = malloc(sizeof(struct Node));
    n->Data = value;
    n->next = start;
    start = n;
    return start;
}
void display(struct Node *start){
    if(start == NULL ){
        printf("List Is Empty!");
    }else{
        struct Node *t = start;
        while(t!=NULL){
            printf(" %d |",t->Data);
            t = t->next;
        }
    }
    printf("\n");
}
void main(){
    int ch , var , loop;
    loop = 1;
    struct Node *start;
    start = createList(start);
    display(start);
    while(loop){
        printf("Menu\n");
        printf("1. Add Element at Beginning.\n");
        printf("2. Add Element at the End.\n");
        printf("3. Add Element After Any Element.\n");
        printf("4. Add Element Before Any Element.\n");
        printf("5. Delete Element.\n");
        printf("6. Count Number of Element's.\n");
        printf("7. Search Element In The List.\n");
        printf("8. Exit.\n");
        printf("Enter The Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter The Element you want to Add : ");
                scanf("%d",&var);
                start = addAtBeg(start , var);
                printf("After Insertion List.\n");
                display(start);
                break;
            case 2:
                printf("Enter The Element you want to Add : ");
                scanf("%d",&var);
                start = addAtEnd(start , var);
                printf("After Insertion List.\n");
                display(start);
                break;
            case 3:
                printf("Enter the Element After you want to insert : ");
                scanf("%d",&ch);
                printf("Enter The Element you want to Add : ");
                scanf("%d",&var);
                start = addAfter(start , ch ,var);
                display(start);
                break;
            case 4:
                printf("Enter the Element before which you want to insert : ");
                scanf("%d",&ch);
                printf("Enter The Element you want to Add : ");
                scanf("%d",&var);
                start = addBefore(start , ch ,var);
                display(start);
                break;
            case 5:
                printf("Enter The Element you want to Delete : ");
                scanf("%d",&var);
                start = del(start , var);
                printf("After Deletion List.\n");
                display(start);
                break;
            case 6:
                printf("Calculating......\n");
                int num = SizeOfList(start);
                printf("Number of Element in a List = %d\n",num);
                break;
            case 7:
                printf("Enter the Element you want to Search : ");
                scanf("%d",&ch);
                int loc = SearchList(start , ch);
                if(loc > -1)
                    printf("Position Of The Element Is %d.\n",loc);
                else
                    printf("Element Not Found!\n");
                display(start);
                break;
            case 8:
                printf("After All Operations list will be.\n");
                display(start);
                exit(0);
            }
        printf("Want to Continue...\n");
        printf("1 .Yes\n2 .No\n");
        printf("Enter Your Choice : ");
        scanf("%d",&loop);
        if(loop == 2){
            printf("After All Operations list will be.\n");
            printf("The Size Of List Is %d.\nThe List Is ->> ",SizeOfList(start));
            display(start);
            exit(1);
        }
    }
}

