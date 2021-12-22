// Programmer: Rueil Manzambi
// MST Username: rnm8cm
// Instructor: Johnathan Dunker
// Section: 301
// Date: 03/09/2021
// Description: Main file for a program that generate an array with the user's inputs, sort the array
//              return search given values in the array
// Leave this as the file name
// @file: main.cpp

// This must be your header
#include "lab8.h"

using namespace std;

// I will use this const (It may or may not be 10)
const int SIZE = 10;

// If this main works, the tests will work
// Comment this main out for your own tests
// Do not put anything other than main in this file!
// This is an example to make sure your functions work!
// I will have several mains to test your functions
int main()
{
  int array[SIZE]; // Array to work with
  int index;       // Index for find
  int value;       // Value to search for in find
  
  // Generate the array. Ask the user for input
  generate_array(array, SIZE);
  

  // Print the array
  print_array(array, SIZE);
  

  // Sort the array
  sort_array(array, SIZE);
  cout << endl;

  // Print the sorted array
  print_array(array, SIZE);
  cout << endl;

  // Get search value
  cin >> value;
  

  // Get the find the
  index = find(array, SIZE, value);
  cout << "Find: " << value << endl;;
  if(index == -1) {
    cout << "Array didn't have " << value << endl;
  } else {
    cout << "Value was in position " << index << " - Array[" << index << "] is: " << array[index] << " - see?" << endl;
  }
  
  // Do it again!
  // Get search value
  cin >> value;
  
  // Get the find the
  index = find(array, SIZE, value);
  cout << "Find: " << value << endl;;
  if(index == -1) {
    cout << "Array didn't have " << value << endl;
  } else {
    cout << "Value was in position " << index << " - Array[" << index << "] is: " << array[index] << " - see?" << endl;
  }
  
  return 0;
}
