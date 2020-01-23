#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int a[4][5];

  cout << "This program accepts 20 numbers." << endl;

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << "Input number: ";
      cin >> a[i][j];
    }
  }

  cout << endl;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}