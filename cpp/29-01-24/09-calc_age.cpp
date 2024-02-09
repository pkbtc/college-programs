#include <iostream>

using namespace std;

int main() {
  int currentYear, yearOfBirth, age;
  cout << "Enter your Year of Birth: ";
  cin >> yearOfBirth;
  cout << "Enter current year: ";
  cin >> currentYear;
  cout << "Age = " << currentYear - yearOfBirth;
}
