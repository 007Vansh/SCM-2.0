#include<iostream>
#include<cmath>
using namespace std;

int power(int n)
{
    float cube;
    cout<<"Enter number ";
    cin>>n;

    cube=pow(n,3);

    cout<<"The cube of number is "<<cube;
}

int main()
{
    int n;
    power(n);
    return 0;
}

