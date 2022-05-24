#include<iostream>
using namespace std;

void add(int a,int b)
{
int c;
cout<<"Enter the value of first number ";
cin>>a;
cout<<"Enter the value of second number ";
cin>>b;

c=a+b;

cout<<"The sum of both the no is "<<c;
}

int main()
{
    int x,y;
    add(x,y);
    return 0;
}
