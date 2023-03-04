// stack push pop using array
#include<iostream>
using namespace std;
int top,arr[10];
string s="syhga";
void push()
{if(top==9)
cout<<"Overflow"<<endl;
else
{for(int c=0;c<s.size();c++)
    {(++top);
    arr[top]=s[c];
    }}
}
void pop()
{if(top<0)
cout<<"Empty stack\n";
else
{cout<<(char)arr[top];
--top;
}
}
int main(void)
{top=-1;
push();
while(top!=-1)
{pop();}}





