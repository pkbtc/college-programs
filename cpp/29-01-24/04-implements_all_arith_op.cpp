#include <iostream>
#include <any>

using namespace std;

void operate_on_diff_operations(double x, double y)
{
  cout << x << " + " << y << " = " << x +y << endl;
  cout << x << " - " << y << " = " << x -y << endl;
  cout << x << " * " << y << " = " << x *y << endl;
  cout << x << " / " << y << " = " << x /y << endl;
}

int main()
{
  any x, y;
  cout << "Using integer" << endl;
  operate_on_diff_operations(1,2);
  cout << "Using char" << endl;
  operate_on_diff_operations('A','B');
  cout << "Using float" << endl;
  operate_on_diff_operations(1.52,3.45);
  cout << "Using double" << endl;
  operate_on_diff_operations(23.4123,1.412);
}
