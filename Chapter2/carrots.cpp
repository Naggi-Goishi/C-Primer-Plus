// carrots.cpp
// uses and displays a variable

#include <iostream>


int main()
{
  using namespace std;
  // declare an integer varibale
  int carrots;
  // assign a value to the variable
  carrots = 25;
  cout << "I have ";
  cout << carrots;
  cout << " carrots.";
  cout << endl;
  // modify the varibale
  carrots = carrots - 1;
  cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
  return 0;
}
