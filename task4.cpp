#include <iostream>

using namespace std;

int main () {

 int currentYear, birthYear;

 cout << " Enter your birth year :"<<endl;

 cin >> birthYear;

 cout<< " Enter current year :"<<endl;

 cin >> currentYear;

 

 int age = currentYear - birthYear;

 cout << "Enter age" << age <<endl;

 if (age >= 18 && age <= 28) {

   cout << "You are eligible for recruitment.\n";

 } else {

   cout << " You are not eligible for recruitment\n ";

 }

 

 return 0;

}
