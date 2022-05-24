#include<iostream>
#include<cmath>
using namespace std;

int power(int n)
{
    float sqr;
    cout<<"Enter number ";
    cin>>n;

    sqr=pow(n,2);

    cout<<"The sqr of number is "<<sqr;
}

int main()
{
    int n;
    power(n);
    return 0;
}

