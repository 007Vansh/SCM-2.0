#include <iostream>
using namespace std;

class Area
{
	private:
		int a;
	public:

		void readarea(void)
		{
	cout<<"Enter side of square: ";
	cin>>a;
	};
		void perimeter(void){
    int per;
    per=4*a;
	cout<<"The perimeter of square is "<<per<<" units "<<endl;
	};
		void area(void){
    int area;
    area=a*a;
	cout<<"The area of square is "<<area<<" sq units "<<endl;
	};
};


int main()
{
    Area Area;

	Area.readarea();

	Area.perimeter();

	Area.area();

	return 0;
}
