#include<iostream>
#include<stdlib.h>
#define N 5
using namespace std;

int stk[N];
int top=-1;

void push(int x)
{
    if(top==N-1)
        cout<<endl<<"STACK IS FULL\n";
    else
    {
        top++;
        stk[top]=x;
    }
}
void pop()
{
    if(top==-1)
        cout<<endl<<"STACK IS EMPTY \n";
    else
    {
        cout<<"POPPED ELEMENT IS "<<stk[top];
        top--;
    }
}
void display()
{
    int x,t;
    t=top;
    if(top==-1)
        cout<<endl<<"STACK IS EMPTY\n";
    else
    {
        cout<<endl<<"CONTENT OD STACK IS :: \n";
        for(int i=t;i>=0;i--)
        {
            x=stk[t];
            cout<<x<<endl;
            t--;
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
