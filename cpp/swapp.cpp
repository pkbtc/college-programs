#include <iostream>

using namespace std;

void swap_num(int *n1, int *n2){
  int tmp;
  tmp = *n1;
  *n1 = *n2;
  *n2 = tmp;
}

int main (int argc, char *argv[]) {
  int num1 = 5, num2 =10;
  cout << "num1 = " << num1 << " and " << "num2 = " << num2 << endl;

  swap_num (&num1, &num2);
  cout << "num1 = " << num1 << " and " << "num2 = " << num2 << endl;
  return 0;
}
