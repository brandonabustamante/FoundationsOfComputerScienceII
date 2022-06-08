// Brandon A Bustamante
// Programming Assignment 2 Bicycle Race Results

/*
  * Write a C++ program that will allow a user to access the results from a
  * time-trial bike race. The race consists of laps around a 6.1 mile course,
  * and the racers try to complete as many laps as they can within 6 hours.
  * Only complete laps count. Your program will read in the race results from a
  * file and display the data in the format requested.
  * 
  * Your program will be provided with a dataset in a file containing the 
  * following information for each racer:
  * 
  * 1. Bib number - a positive integer
  * 2. Racer’s name - a string (may include spaces)
  * 3. Distance covered by the racer (equal to the number of laps completed
  *    times 6.1)
  * 4. Recorded time - a string in “05:23:32” format The number of laps is not
  *    provided and does not need to be computed.
  * 
  * The program should first read the results from a text file named “dataset.txt”.
  * It will not contain more than 100 racer's results. A sample of this file is
  * available under Downloadable files below.
  * 
  * Then, it should offer the user a menu with the following options:
  *
  * 1. Display Results sorted by bib number
  * 2. Display Results sorted by distance, then time
  * 3. Lookup a bib number given a name
  * 4. Lookup a result by bib number
  * 5. Quit the Program
  * 
  * The program should perform the selected operation and then re-display the menu.
  * Display an error message if the user enters an inappropriate number.
  * 
  * For options 1 and 2, display the results for each racer on a single, separate
  * line. The results should include the Bib number, the name, the distance, and
  * the time. The values should line up in columns (see "Tips" section below for
  * more details).
  * 
  * For option 3, output the bib number and for option 4, output the results for
  * the racer on a single line. For options 3 and 4, if the racer is not found
  * display an appropriate message.
  * 
  * See sample_execution.txt in the Downloadable files section. In order to pass
  * the test cases, your output will need to match exactly.
  * 
  * Additional Requirements:
  * 
  * This program should be completed in a Linux or Unix environment, using a
  * command line compiler like g++.

  * Your program should contain a structure called Result with the following
  * 4 fields:
  * 
  * 1. bibNumber - integer number
  * 2. name - a string
  * 3. distance - a double
  * 4. time - a string
  * 
  * Important: Don't change field names/data types or their order. You'll not be
  * able to pass all tests otherwise
  * 
  * Use a partially filled array of structures to store the results. Use a counter
  * variable to count the number of results that are read in from the file, and
  * use this value as the size of the array for the search and sort functions.
  * 
  * Aside from main your program should have at least these 6 functions:
  * 
  * 1. void readDataset(ifstream& in, Result results[], int &size); 
  * 2. void displayDataset(Result results[], int size);
  * 3. int linearSearchByName(Result results[], int size, string targetName);
  * 4. int binarySearchByNumber(Result results[], int size, int targetNumber);
  * 5. void sortByNumber(Result results[], int size);
  * 6. void sortByDistanceTime(Result results[], int size);
  * 
  * 1. readDataset. Should read results into results array from the "in" file
  *    stream (opened in main). Updates size. 
  * 
  * 2. displayDataset. Should nicely print results array (see "Tips" section)
  * 
  * 3. linearSearchByName. Should find the index of a racer's result by their name
  *    using a linear search. If no such racer exist return -1.
  *
  * 4. binarySearchByNumber. Should find the index of a racer's result by their
  *    bib number using a binary search. If no such racer exist return -1.
  *
  * 5. sortByNumber. Should sort results by bibNumber field in ascending order.
  *    Must use bubble sort or selection sort algorithm.
  *  
  * 6. sortByDistanceTime. Should sort results by distance (descending) and if
  *    two racers have the same distance they should be ordered by time in
  *    ascending order. Must use bubble sort or selection sort algorithm.
  * 
  * Important: Don't change function names, parameter/return data types or you'll
  * not be able to pass all tests.

  * Do not use a library sort function or comparators to sort the data. Modify
    the code covered in class (included in Downloadable files below).

*/
/********************************************************************************/

// Function prototypes

#include <iostream>

using namespace std;

struct Result {
    int bibNumber;
    string name;
    double distance;
    string time;
};

void readDataset(ifstream& in, Result results[], int &size); 
void displayDataset(Result results[], int size);
int linearSearchByName(Result results[], int size, string targetName);
int binarySearchByNumber(Result results[], int size, int targetNumber);
void sortByNumber(Result results[], int size);
void sortByDistanceTime(Result results[], int size);


int main() {

}