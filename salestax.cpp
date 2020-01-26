#include <iostream>

using namespace std;

// taxRate is in percent form
// Ex: if taxRate = 9, then the tax is 9%
float addTax(float taxRate, float cost)
{
  const float decimalRate = taxRate / 100;
  return cost + (cost * decimalRate);
}

int main(int argc, char **argv)
{


  cout << addTax(1, 300) << endl;
  return 0;
}