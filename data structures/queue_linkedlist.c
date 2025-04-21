#include<stdio.h>
#include<stdlib.h>
struct lnode
{
 int data;
 struct lnode*link;
};
typedef struct lnode node;
node*front=NULL;
node*rear=NULL;
void enqueue(int k);
void dequeue();
void display();
int main()
{
    int ch,val;
    while(1)
    {
        printf("\n1.insert element in the quueue");
        printf("\n2.delete element in the queue");
        printf("\n3.display the queue");
        printf("\nenter the choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter the value to insert");
            scanf("%d",&val);
            enqueue(val);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("invalid value");
        }
    }
    return 0;
}
void enqueue(int k){
    node*newnode=(node*)malloc(sizeof(node));

    if(newnode==NULL){
        printf("\n overflow");
    }
    else{
        newnode->data=k;
        if(front==NULL){
            front=newnode;
            rear=newnode;
            front->link=NULL;
            rear->link=NULL;
        }
        else{
            rear->link=newnode;
            rear=newnode;
            rear->link=NULL;
        }
    }
}
void dequeue()
{
    node*temp;
    if(front=NULL)
    {
        printf("underflow");
    }
    else{
        temp=front;
        front=front->link;
        free(temp);
    }
}
void display()
{
    node*d;
    d=front;
    if(front==NULL)
    {
        printf("empty queue");
    }
    else{
        while(d!=NULL)
        {
            printf("\n%d",d->data);
            d=d->link;
        }
    }
}
