#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node *head=NUll;
void printlist();
void deletedlast();
int main()
{
    struct node*p;
    struct node*p1;
    struct node*p2;

    p=(struct node*)malloc(sizeof(struct node));
    p1=(struct node*)malloc(sizeof(struct node));
    p2=(struct node*)malloc(sizeof(struct node));


    p->data=10;
    p->link=p1;

    p1->data=20;
    p1->link=p2;

    p2->data=30;
    p2->link=NULL;
    printlist(p);
    return 0;
 
}
void printlist( struct node*v)
{
    while(v!=NULL)
    {
        printf("%d\t",v->data);
        v=v->link;
    }
}
void deletedlast()
{
    struct node*p=head;
    while(p->link->link!=head)
    {
        p=p->link;
        p->link=NULL;
    }
}
