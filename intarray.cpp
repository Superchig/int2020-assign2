#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int numberArray[10];

  cout << "Input up to 10 nonnegative integers (ending with -1): ";
  int input;
  for (int i = 0; i < 10; ++i) {
    cin >> input;
    if (input >= 0) {
      numberArray[i] = input;
    }
    else {
      numberArray[i] = -1;
      break;
    }
  }

  cout << "Your numbers were: ";
  for (int i = 0; i < 10; ++i) {
    if (numberArray[i] == -1) {
      break;
    }

    cout << numberArray[i] << ' ';
  }
  cout << '\n';
}