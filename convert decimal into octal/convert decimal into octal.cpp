#include <iostream>
using namespace std;
void DecimalToOctal(int decimalNum) {
   int octalNum = 0, placeValue = 1;
   int dNo = decimalNum;
   while (decimalNum != 0) {
      octalNum += (decimalNum % 8) * placeValue;
      decimalNum /= 8;
      placeValue *= 10;
   }
   cout<<"Octal form of decimal number "<<dNo<<" is "<<octalNum<<endl;
}
int main() {
   DecimalToOctal(70);
   return 0;
}
