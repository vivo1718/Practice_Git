#include<stdio.h>
#include<stdlib.h>
struct dnode{
    int data;
    struct dnode *next;
    struct dnode *prev;
};
struct dnode *p = NULL;
void add_at_begin();
void append();
void reverse_print();
void display();
int main(){
    int ch;
    printf("\n***doubly LinkList Implementation***\n");
    while(1){
        printf("\n1.add_at_begin\n2.Append\n3.Reverse_print\n4.Display\nExit\n");
        printf("\nEnter your Choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("\nADD AT BEGIN\n");
                    add_at_begin();
                    break;
            case 2: printf("\nAPPEND\n");
                    append();
                    break;
            case 3: printf("\nREVERSE PRINT\n");
                    add_at_begin();
                    break;
            case 4: printf("\nDISPLAY\n");
                    display();
                    break;
            case 5: printf("\nEXIT\n");
                    exit(0);
                    break;
            default: printf("\nInvalid input\n");
            
        }
    }
}


void add_at_begin(){
    int num;
    struct dnode *temp;
    printf("\nEnter the number to add+at+begin: ");
    scanf("%d",&num);
    temp = (struct dnode *)malloc(sizeof(struct dnode));
    temp->data =  num;
    temp->next = p;
    temp->prev  = NULL;
    p=temp;
}

void append(){
    int num;
    struct dnode *temp,*nw;
    printf("\nEnter the number to append: ");
    scanf("%d",&num);
    if(p==NULL){
        temp=(struct dnode*)malloc(sizeof(struct dnode));
        temp-> data = num;
        temp->next = p;
        temp->prev = NULL;
        p=temp;
    }
    else{
        temp= p;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        nw=(struct dnode*)malloc(sizeof(struct dnode));
        nw->data=num;
        nw->next= NULL;
        nw->prev = temp->next;
        temp->next = nw->prev;

    }
}

void display(){
    struct dnode *temp;
    temp=p;
    temp->prev = NULL;
    while(temp!=NULL){
        printf("\nDisplay: %d",temp->data);
        temp=temp->next;
    }
}