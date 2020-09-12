#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;

struct node *create()
{
    return (struct node *)malloc(sizeof(struct node));
};
void push(int x)
{
    struct node *temp;
    temp=create();
    temp->data=x;
    temp->next=NULL;
    if(top==NULL)
        top=temp;
    else
    {
        temp->next=top;
        top=temp;
    }
}
void pop()
{
    int x;
    if(top==NULL)
        cout<<endl<<"STACK IS EMPTY \n";
    else
    {
        x=top->data;
        cout<<"POPPED ELEMENT IS "<<x;
        top=top->next;
    }
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
        cout<<endl<<"STACK IS EMPTY\n";
    else
    {
        cout<<endl<<"CONTENT OD STACK IS :: \n";
        while(temp)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

int main()
{
    int x,ch,y;
    while(1)
    {
        cout<<endl<<"1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n";
        cout<<"Enter your choice :: ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<endl<<"Enter the number to PUSH into STACK :: ";
                    cin>>y;
                    push(y);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(1);
            default:exit(1);
        }
    }
    return(0);
}
