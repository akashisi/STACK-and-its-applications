#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 50
using namespace std;
char stk[N];
int top=-1;

void push(char ch)
{
    if(top==(N-1))
        cout<<"\nSTACK  IS  FULL\n";
    else
    {
            //if(ch==32)
                //top++;
            top++;
            stk[top]=ch;

    }
}
char pop()
{
    if(top==(N-1))
        cout<<"\nSTACK  IS  EMPTY\n";
    else
    {
        while(top!=-1)
            return(stk[top--]);
    }
}
void display()
{
    int i=0;
    if(top==-1)
        cout<<"\nSTACK  IS  EMPTY\n";
    else
    {
        for(i=top;i>=0;i--)
        {
            cout<<stk[i];
        }
    }
}

int main()
{
    int i=0;
    char str[50];
    scanf("%[^\n]s",str);
    for(i=0;i<(strlen(str));i++)
    {
        if(str[i]==32)
            continue;
        push(str[i]);
    }
    for(i=0;i<strlen(str);i++)
    {
        cout<<pop();
    }



    return(0);
}


