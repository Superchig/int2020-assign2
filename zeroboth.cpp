#include <iostream>

using namespace std;

void zeroBoth(int &first, int &second)
{
  first = 0;
  second = 0;
}

// Main function to test out zeroBoth
int main(int argc, char **argv)
{
  int i1 = 3000;
  int i2 = -42;

  cout << "i1: " << i1 << endl;
  cout << "i2: " << i2 << endl;
  
  cout << "Using zeroBoth on i1 and i2." << endl;
  zeroBoth(i1, i2);

  // Both i1 and i2 should be 0
  cout << "i1: " << i1 << endl;
  cout << "i2: " << i2 << endl;

  return 0;
}