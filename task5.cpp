#include <iostream>

using namespace std;

int main () {

 double length1 , width1 , length2 , width2;

 cout<< "Enter length1\n";

 cin>> length1;

 cout<< "Enter width1\n";

 cin>> width1;

 

 cout<<"Enter length2\n";

 cin>> length2;

 cout<< "Enter width2\n";

 cin>>width2;

 

 double area1 = length1 * width1;

 double area2 = length2 * width2;

 

 if (area1 == area2) {

   cout << "Rectangle1 and Rectangle2 have equal areas\n";

   } else

   cout << "Rectangle1 and Rectangle2 do not have equal areas\n";

   return 0;

}
