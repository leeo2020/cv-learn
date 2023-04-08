#include <iostream>
#include <string>

using namespace std;

string say_hello()
{
  return string("Hello, CMake world!");
}

int main()
{
  cout << say_hello() << endl;
  return 0;
}
