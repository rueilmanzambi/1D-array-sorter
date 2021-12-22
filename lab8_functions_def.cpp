// Programmer: Rueil Manzambi
// MST Username: rnm8cm
// Instructor: Johnathan Dunker
// Section: 301
// Date: 03/09/2021
// File: lab8_functions_def.cpp
// Description: Contains definitions of functions used by main.cpp for lab8


#include <iostream>
#include "lab8.h"

using namespace std;


// Description: prompts the user to input values in the array
// Pre: size has to be a non-zero positive integer
// Post: assigns each user's inputted value in array indexes
void generate_array(int array[], const int size)
{

  cout << "Input the values for an array of size " << size << ":" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  return;
}


// Description: prints the passed array
// Pre: size has to be a non-zero positive integer
// Post: prints the array
void print_array(int array[], const int size)
{
  cout << "[";
  for (int i = 0; i < size; i++)
  {
    cout << array[i];
    i == size - 1?cout<<"]":cout<<", ";
  }
  return;
}


// Description: sorts the passed array
// Pre: size has to be a non-zero positive integer
// Post: sorts the array
void sort_array(int array[], const int size)
{
  
  for (int i = 1; i < size; i++)
  {
    for (int j = 0; j < size - i; j++)
    {
      if (array[j] > array[j+1])
      {
        int swap = array[j+1];
        array[j+1] = array[j];
        array[j] = swap;
      }
    }
  }
return;
        
}


// Description: find the index the passed value
// Pre: size has to be a non-zero positive integer
// Post: returns the index, or -1 when the value is not found  
int find(int array[], const int size, const int value)
{
  // variable initialization
  int return_value = -1;
  int not_found = -1;
  int index_position = 0;

  do // looks for the index until the end of the array is reached or until the index is found
  {
    if (array[index_position] == value)
      return_value = index_position;
    else
      index_position++;
  } while (index_position < size && return_value == not_found);

  return return_value;
}
