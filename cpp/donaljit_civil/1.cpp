#include <iostream>

using namespace std;

inline void display_guy(char name[30], char address[50], int age, float salary){
  cout << "Name : " << name <<endl;
  cout << "Address : " << address <<endl;
  cout << "age : " << age <<endl;
  cout << "salary : " << salary <<endl;
};

int main (int argc, char *argv[]) {
  char name[30], address[50];
  int age;
  float salary;
  cout << "Name : ";
  cin >> name;
  cout << "Address : ";
  cin >> address;
  cout << "Age : ";
  cin >> age;
  cout << "Salary : ";
  cin >> salary;
  
  display_guy(name,address,age,salary);

  return 0;
}
