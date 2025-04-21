#include<stdio.h>
#include<stdlib.h>
struct lnode{
    int data;
    struct lnode*link;
};
typedef struct lnode node;
node* head=NULL;

void insertatbegin(int b){
    node*newnode=(node*)malloc(sizeof(node));

    if (newnode==NULL){                        //check space to store node
        printf("not permission to store");
        return;
    }
    newnode->data=b;
    if(head==NULL){                         //checking the struct node has null 
        newnode->link=NULL; 
        head=newnode;                       //now storing address in head
    }
    else {                      // incase there will be null then it insert at begin and point out nxt node
        newnode->link=head; 
        head=newnode;
        printf("element inserted");
    }  
}
void insertatend(int b)
{
    node*newnode=(node*)malloc(sizeof(node));
    newnode->data=b;
    node*p=head;
    while(p->link=NULL)
    {
        p=p->link;
    }
    newnode->link=NULL;
    p->link=newnode;
    printf("element inserted at end.....");
}
void insertatmiddle(int b)
{
    node*newnode=(node*)malloc(sizeof(node));
    newnode->data=b;
    node*slow=head;
    node*fast=head;
    node*prev=NULL;
    while(fast!=NULL && fast->link!=NULL)
    {
        fast=fast->link->link;
        prev=slow;
        slow=slow->link;
    }
    newnode->link=slow;
    if(prev!=NULL)
    {
        prev->link=newnode;
    }
}
void display(){
    if(head==NULL){
        printf("empty list");            
    }
    else{
        node*temp=head;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->link;           
        }
    }
}
void serach_second()
{
    node*p=head;
    if(p==NULL || p->link==NULL)
    {
       // return -1;
        printf("%d",p->data);
    }
    else{
        printf("%d",p->link->data);
        printf("\nelement  founded");
    }  
}
void deleteatend()
{
    node*p;
    node*p1;
    if(head->link==NULL)
    {
        head=NULL;
        free(head);
        printf("one element delete at end;");


    }
    else{
        p1=head;
        while(p1->link!=NULL)
        {
           p1=p;
           p=p->link;
        }
        p1->link=NULL;
        free(p1);
        printf("element delete at end;");
    }
}
int main()
{
    int ch,val;
    printf("1.insert at begining\n");
    printf("2.insert at end\n");
    printf("3.display \n");
    printf("4.insert at middle\n");
    printf("5.serach_second\n");
    printf("6.delete at end \n");
    printf("------------------");
    
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
            case 4:
            printf("enter the value:");
            scanf("%d",&val);
            insertatmiddle(val);
            break;
            case 5:
            serach_second();
            break;
            case 6:
            deleteatend();
            break;
            case 7:
            exit(1);
            break;
            default:
            printf("invalid");
        }         
    }   
    return 0;
}