#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    int x,y;

    cout<<"Enter first number ";
    cin>>x;
    cout<<"Enter second number ";
    cin>>y;

    cout<<"The value of first and second number before swap is "<<x<<" "<<y<<endl;

    swap(x,y);

    cout<<"The new values of first number and second number after swapping is "<<x<<" "<<y;

    return 0;
}
