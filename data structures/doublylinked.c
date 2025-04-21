#include<stdio.h>
#include<stdlib.h>
struct lnode{
    int data;
    struct lnode*flink;
    struct lnode*blink;
};
typedef struct lnode node;
node* head=NULL;
void insertatbegin(int k);
void insertatend(int k);
void display();
int main()
{
    int ch,val;
    printf("1.insert at begining\n");
    printf("2.insert at end\n");
    printf("3.display \n");
    printf("4.insert at middle\n");
    printf("5.insert before value\n");
    printf("--------------------------------------------------------------------------------");
    while(1)
    {
        printf("\nenter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter the value:");
            scanf("%d",&val);
            insertatbegin(val);
            break;
            case 2:
            printf("enter the value:");
            scanf("%d",&val);
            insertatend(val);
            break;
            case 3:
            display();
            break;
            case 5:
            exit(1);
            default:
            printf("invalid");
        }         
    }  
    return 0;
}
void insertatbegin(int k)
{
    node*newnode=(node*)malloc(sizeof(node));
    if (newnode==NULL)
    {
        printf("overflow");
    }
    else{
        if(head==NULL)
        {
            newnode->flink=NULL;
            newnode->blink=NULL;
            newnode->data=k;
            head=newnode;
        }
        else{
            newnode->data=k;
            newnode->blink=NULL;
            newnode->flink=head;
            head->blink=newnode;
            head=newnode;
        }
    }

}
void insertatend(int k)
{
    
    node*newnode=(node*)malloc(sizeof(node));
    if (newnode==NULL)
    {
        printf("overflow");
    }
    newnode->data=k;
        if(head==NULL)
        {
            newnode->flink=NULL;
            newnode->blink=NULL;
            head=newnode;
            printf("element inserted");
        }
        else{
            node*temp=head;
            while(temp->flink!=NULL){
                temp=temp->flink;
            }
            temp->flink=newnode;
            newnode->blink=temp;
            newnode->flink=NULL;
        }
        printf("element inserted");
    

}
void display()
{
    node*temp=head;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->flink;
    }

}