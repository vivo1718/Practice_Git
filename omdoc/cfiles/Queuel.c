# include<stdio.h>
# include<stdlib.h>
void insert();
void deleted();
void display();
struct node{
    int data ;
    struct node *next;
};







struct node *rear= NULL;
struct node *front=NULL;
int main(){
    int ch;
    printf("\n queue implementation\n");
    while(1){
        printf("\n1.insertion\n2.Deletion\n3.display\n4.Exit\n");
        printf("\n Enter your choice \n");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("\n Enter the number to insert\n");
                    insert();
                    break;
            case 2: printf("\n Delete \n");
                    deleted();
                    break;
            case 3: printf("\nDisplay: ");
                    display();
                    break;
            case 4: printf("\n Exit \n");
                    exit(0);
                    break;
                    
            default : printf("\n invalid input \n");
                    }
    }
    return 0;
}

void insert(){
    int num;
    struct node *temp;
    printf("\n enter the number \n");
    scanf("%d",&num);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    temp->next= NULL;
    rear=temp;
   
    if(rear==NULL){
        front=rear=temp;
    }
    else{
        rear->next = temp;
        rear = rear->next;
    }
}


void deleted(){

    if(front==NULL){
        printf("\n list is empty\n");
        return ;
    }

    struct node *temp;

    temp=front;
    front=front->next;
    while(temp!=NULL){
    
    printf("%d",temp->data);
    temp=temp->next;
    }
    
    

}
void display(){

    struct node *temp,*nw;

    

    if(rear==NULL){
        printf("\n Nothing to display\n");
        return ;

    }
    if(front ==NULL){
    front = temp;

    nw = front;
    while(nw!=NULL){
        printf(" The elements are %d",nw->data);
        nw=nw->next;
    }
}
}




