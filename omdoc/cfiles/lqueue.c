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
void mai(){
    int ch;
    printf("\n queue implementation\n");
    while(1){
        printf("\n1.insertion\n.Deletion\n3.display\n");
        switch(ch){
            case 1: printf("\n Enter the number to insert\n");
                    insert();
                    break;
            case 2: printf("\n Delete \n");
                    deleted();
                    break;
            case 3: printf("\n display \n");
                    display();
                    break;
            case 4: printf("\n Exit \n");
                    exit(0);
                    
            default : printf("\n invalid input \n");
                    }
    }
}

void insert(){
    int num;
    struct node *temp;
    printf("\n enter the number \n");
    scanf("%d",&num);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    temp->next= rear;
    rear=temp;
   
    if(rear==NULL){
        front=rear=temp;
    }
    else{
        rear = rear->next;
        temp=rear;
    }
}


void deleted(){
    struct *temp;
    if(front==NULL){
        printf("\n Nothing to display\n");
        return ;

    }
    front=front->next;
    temp=front;
    free(temp);
}
void display(){
    struct *temp;
    if(front==NULL){
        printf("\n Nothing to display\n");
        return ;

    }
    temp=front;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}



