#include <iostream>
using namespace std;

class Area
{
	private:
		int a,b;
	public:

		void readarea(void);
		void perimeter(void);
		void area(void);
};

void Area::readarea(void)
{
	cout<<"Enter length of rectangle: ";
	cin>>a;
	cout<<"Enter breadth of rectangle: ";
	cin>>b;
}

void Area::perimeter(void)
{
    int per;
    per=2*(a+b);
	cout<<"The perimeter of rectangle is "<<per<<" units "<<endl;
	}

void Area::area(void)
{
    int area;
    area=a*b;
	cout<<"The area of rectangle is "<<area<<" sq units "<<endl;
	}


int main()
{
    Area Area;

	Area.readarea();

	Area.perimeter();

	Area.area();

	return 0;
}

