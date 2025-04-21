#include<stdio.h>
#include<stdlib.h>
#define size 100
int top=-1,a[size];
void push();
void pop();
void display();
int main()
{
    int choice;
    printf("perform operation in stack");
    printf("\n");
    printf("1.push the element");
    printf("\n");
    printf("2.pop the element");
    printf("\n");
    printf("3.display the element");
    printf("\n");
    while(1)
    {
        printf("\nenter the choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("invalid");
        }
    }
    return 0;
}
void push()
{
    int val;
    if (top==size-1)
    {
        printf("underflow...");

    }
    else{
        printf("enter the element you want to add");
        scanf("%d",&val);
        top++;
        a[top]=val;
        printf("element push in the stack");
    }
    
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        top=top-1;
        printf("poped element :%d",a[top]);
        
    }
}
void display()
{
    int val;
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        printf("Element in the stack");
        for(int i=top;i>=0;i--)
        {
            printf("%d",a[i]);
            printf("\n");
        }
        
    }
}



