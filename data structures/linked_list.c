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
    else{                      // incase there will be null then it insert at begin and point out nxt node
        newnode->link=head; 
        head=newnode;
    }
    printf("element inserted..........");
}
void display(){
    if(head==NULL){
        printf("empty list");
        return;
    }
    else{
        node*temp=head;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->link;
        }
    }
}
int main()
{
    int ch,val,a;

    while(a=1)
    {
        printf("1.insert at begining\n");
        printf("2.display the list\n");
        printf("3.insert at specified position\n");
        printf("4.deleted specified poistion\n");
        printf("5.exit\n");
        printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("enter the choice:");
        scanf("%d,&ch");
        switch(ch)
        {
            case 1:
            printf("enter the value:");
            scanf("%d",&val);
            insertatbegin(val);
            break;
            case 2:
            display();
            
            /*case 3:
            printf("enter the position");
            scanf("%d",&pos);
            printf("enter the value:");
            scanf("%d",&b);
            //insertpos(pos,val);
            break;
            case 4:
            printf("enter the position");
            scanf("%d",&pos);
            //deletedfrompos(pos);
            break;
            case 5:
            exit(0);
            default:
            printf("invalid choice");  */ 
            printf("\nenter to continue:");
            scanf("%c",&a); 
            break;
        }

    }
    return 0;

}