// Brandon A Bustamante, yxx5
// No Collaborators
// Programming Assignment 3 isSorted

/*
  * You need to write a function named isSorted. The function is described below:
  * isSorted: takes an array of integers and its size as arguments. It should
  * return true if the elements of the array are already in ascending order,
  * and false if they are not. Do not use square brackets [] anywhere in the
  * function, not even the parameter list (use pointers instead).
  * 
  * Use the main function to demonstrate your function (you may use square
  * brackets in the main function). Assume the input will be a sequence of
  * numbers, the first number will be a count of how many numbers follow.
  * Input the values in the array and call isSorted on it. Output the value of
  * the result of the call isSorted. You can use cout << boolalpha to output the
  * result of the function call as true or false instead of 1 or 0. Assume: the
  * maximum size of array is 20 and the input will never exceed the maximum
  * capacity. You do not need to validate the input.
  * 
  * Ex: If the input to the program is:
  * 
  * 8 1 2 3 4 5 6 7 8
  * 
  * the output is:
  * true
  * 
  * If the input to the program is:
  * 
  * 5 1 2 4 3 5
  * 
  * the output is:
  * false
  * Your program must define and call a function named isSorted with two 
  * parameters in the order described above, that returns a bool value.
  * 
*/

/********************************************************************************/

#include <iostream> 

using namespace std;

// Function Prototype
bool isSorted(int*, int);

bool isSorted(int *ptr, int size) {
    //ptr++;
    for(int i = 0; i < size - 1; i++) {
      if(*(ptr + i) > *(ptr + i + 1)) {
        return false;
      }
    }

    return true;

}

int main() {

  int size;

  cin >> size;

  int arr[size -1];

  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int *ptr = arr;

  cout << boolalpha << isSorted(ptr, size) << endl;;

}