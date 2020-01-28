#include <iostream>

using namespace std;

// Prompts the user for their length in feet and inches
// Stores the feet part of the length in outFeet and the
// inches part in outInches
void getLength(double &outFeet, double &outInches)
{
  cout << "Please enter a length in feet and inches." << endl;

  cout << "Feet: ";
  cin >> outFeet;

  cout << "Inches: ";
  int inches;
  cin >> outInches;
}

// Converts from feet and inches to meters and centimeters
// Stores the meters part of the length in outMet and the
// centimeters part in outCm
void toMetric(double feet, double inches, double &outMet, double &outCm)
{
  double totFeet = feet + (inches / 12);
  double totMet = totFeet * .3048;

  // Converting totMet to an int truncates the total number
  // of meters down to just the meters part.
  outMet = ((int)totMet);

  // Represents the decimal part of totMet
  double remainingMet = totMet - outMet;
  // Converts the decimal part into centimeters
  outCm = remainingMet * 100;
}

// Prints out a length in meters and centimeters
void printMetric(double meters, double centimeters)
{
  cout << "Length in metric: " << meters << " meter(s) and " << centimeters
       << " centimeter(s)." << endl;
}

int main(int argc, char **argv)
{
  string exit;
  while (exit != "exit") {
    double feet;
    double inches;
    getLength(feet, inches);

    double meters;
    double centimeters;
    toMetric(feet, inches, meters, centimeters);
    printMetric(meters, centimeters);

    cout << endl;
    cout << "Do you want to exit (type 'exit' to exit)? ";
    cin >> exit;
    cout << endl;
  }

  return 0;
}