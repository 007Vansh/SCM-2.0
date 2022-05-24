#include<iostream>
using namespace std;

int area(int a)
{
    int sq_area;

    sq_area=a*a;
    return sq_area;
}

int area(int l, int b)
{
    int sq_area;

    sq_area=l*b;
    return sq_area;
}

float area(float s)
{
    int sq_area;

    sq_area=3.14*s*s;
    return sq_area;
}

int main()
{
    int l,b,a;
    float s;

    cout<<"Enter side of square ";
    cin>>a;
    cout<<"Area of square is "<<area(a);
    cout<<endl;
    cout<<endl;

    cout<<"Enter length of rectangle ";
    cin>>l;
    cout<<"Enter breadth of rectangle ";
    cin>>b;
    cout<<"Area of rectangle is "<<area(l,b);
    cout<<endl;
    cout<<endl;

    cout<<"Enter radius of circle ";
    cin>>s;
    cout<<"Area of circle is "<<area(s);
    cout<<endl;
    cout<<endl;

    return 0;
}
