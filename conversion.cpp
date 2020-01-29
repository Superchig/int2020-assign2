#include <iostream>

using namespace std;

// Prompts the user for their length in feet and inches
// Stores the feet part of the length in outFeet and the
// inches part in outInches
// Returns true if the user chose to exit
bool getLength(double &outFeet, double &outInches)
{
  string input;
  cout << "Please enter a length in feet and inches." << endl;

  cout << "  Feet (type 'exit' to exit): ";
  cin >> input;
  if (input == "exit") {
    return true;
  }
  outFeet = stoi(input);

  cout << "Inches (type 'exit' to exit): ";
  int inches;
  cin >> input;
  if (input == "exit") {
    return true;
  }
  outInches = stoi(input);

  return false;
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
       << " centimeter(s)." << endl << endl;
}

int main(int argc, char **argv)
{
  while (true) {
    double feet;
    double inches;
    bool shouldExit = getLength(feet, inches);

    if (shouldExit) {
      break;
    }

    double meters;
    double centimeters;
    toMetric(feet, inches, meters, centimeters);
    printMetric(meters, centimeters);
  }

  return 0;
}