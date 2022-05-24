#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter first number ";
    cin>>a;
    cout<<endl;
    cout<<"Enter second number ";
    cin>>b;
    cout<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"The new values of a and b after swapping is "<<a<<" and "<<b;
}

