#include<iostream>
using namespace std;
int main()
{
    int a;

    cout<<"Enter the no of which you want to make a table ";
    cin>>a;

    for(int i=1;i<=10;i++)
    {
        cout<< a << " * " <<i<< " = " <<a*i<<endl;
    }

    return 0;
}
