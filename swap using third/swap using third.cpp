#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter first number ";
    cin>>a;
    cout<<endl;
    cout<<"Enter second number ";
    cin>>b;
    cout<<endl;

    c=a;
    a=b;
    b=c;

    cout<<"The new values of a and b after swapping is "<<a<<" and "<<b;
}
