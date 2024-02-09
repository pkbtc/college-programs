#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
  cout << "Range of int is from " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
  cout << "Range of float is from " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
  cout << "Range of double is from " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
  cout << "Range of char is from " << 0 << " to " << pow(2,sizeof(char)*8)-1 << endl;
  cout << "Range of bool is from " << numeric_limits<bool>::min() << " to " << numeric_limits<bool>::max() << endl;
}
