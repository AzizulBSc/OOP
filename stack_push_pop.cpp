#include<bits/stdc++.h>
#define SIZE 10
using namespace std;
class stack1
{
public:
    int tos;//top of stack
    char stck[SIZE];
public:
    void init()
    {
        tos = 0;
    }
public :
    void push(char element)
    {
        if(tos==SIZE)
        {
            cout<<"Stack is full"<<endl;
            return ;
        }
        stck[tos] = element;
        tos++;
    }
public:
    char pop()
    {
        if(tos==0)
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        tos = tos -1;
        return stck[tos];
    }
public:
    void print()
    {
        for(int i=0; i<tos; i++)
        {
            cout<<stck[i];
        }
        cout<<endl;
    }
};
main()
{
    stack1 s1;
    s1.init();
     cout<<"s1 pushed:->a"<<endl;s1.push('a');
     cout<<"s1 pushed:->b"<<endl;s1.push('b');
    cout<<"s1 pushed:->a"<<endl; s1.push('a');
    cout<<"s1 pushed:->a"<<endl; s1.push('b');
    cout<<"s1 pushed:->b"<<endl; s1.push('b');
    cout<<"s1 pushed:->b"<<endl; s1.push('b');
    cout<<"s1 pushed:->a"<<endl; s1.push('a');
    cout<<"s1 pushed:->b"<<endl ;s1.push('b');
    cout<<"s1 pushed:->a"<<endl; s1.push('a');
    cout<<"s1 pushed:->a"<<endl; s1.push('b');
    cout<<"s1 pushed:->1"<<endl; s1.push('1');
    cout<<"s1 pushed:->0"<<endl; s1.push('0');
    s1.print();
    cout<<endl;
    for(int i = 0;i<13;i++) cout<<"s1 poped:->"<<s1.pop()<<endl;
    cout<<endl;
    cout<<"s1 pushed:->d"<<endl;s1.push('d');
    s1.print();

}
