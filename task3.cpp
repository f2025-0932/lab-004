#include <iostream>
using namespace std;

int main() 
{
   double r;
   cin >> r;
   double h;
   cin >> h;
   double area;
   float PI = 3.14;
   double volume = PI * r * r * h;
   cout << "surface area:" << area << endl;
   cout << "volume of cylinder:" << volume << endl;
   return 0;
}
