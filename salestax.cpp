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
  const int BASE = 300; // Base cost
  const int TAX = 9;    // Tax rate

  cout << '$' << BASE << " with a tax rate of " << TAX << '%' << " equals ";
  cout << '$' << addTax(TAX, BASE) << endl;
  return 0;
}