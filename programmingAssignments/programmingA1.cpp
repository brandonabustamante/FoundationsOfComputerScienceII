// Brandon A Bustamante
// Programming Assignment #1
#include <iostream>
#include <iomanip>

/*
  * Write a program that tracks the medals won by countries participating at the
  * Olympic Games.
  * Your program should use a structure that keeps the following data for
  * a given country:
  * 
  * Country Name
  * Number of gold medals awarded
  * Number of silver medals awarded
  * Number of bronze medals awarded
  * 
  * The program should maintain an array of 8 countries, initialized with the
  * following data.
  * 
  * Country	        Gold	Silver	  Bronze
  * Australia	      11	    14	      12
  * Canada	           5	    0	      1
  * China	           9	    14	      11
  * Great Britain	   8	    4	      8
  * Japan	           8	    10	      10
  * Netherlands	       7	    6	      7
  * Russia	           6	    10	      8
  * USA	              10	    6	      7
  * 
  * When the program runs, it should repeat a loop that performs the following
  * steps:
  * 
  * 1. Print a numbered list of the Countries with column headers and corresponding
  * data for each country on a separate row (see "Sample execution" below for the
  * exact format). The "Total" column records the total number of medals awarded
  * to that country. Use the following code to print the header. Infer the
  * formatting of each row from this code.
  * 
  *  cout << left
  *  << setw(3) << "N"
  *  << setw(15) << "Country"
  *  << right
  *  << setw(10) << "Gold"
  *  << setw (10) << "Silver"
  *  << setw (10) << "Bronze"
  *  << setw(10) << "Total"
  *  << endl;
*/

using namespace std;

struct Teams {
    string countryName;
    int numOfGold;
    int numOfSilver;
    int numOfBronze;

};
/********************************************************************************/
int main() {

    const int NUMTEAMS = 8;
    int totalMedals;

    Teams teamList[] = {{"Australia", 11, 14, 12},
                        {"Canada", 5, 0, 1},
                        {"China", 9, 14, 11},
                        {"Great Britain", 8, 4, 8},
                        {"Japan",8, 10, 10},
                        {"Netherlands", 7, 6, 7},
                        {"Russia", 6, 10, 8},
                        {"USA", 10, 6, 7}};

     cout << left
     << setw(3) << "N"
     << setw(15) << "Country"
     << right
     << setw(10) << "Gold"
     << setw (10) << "Silver"
     << setw (10) << "Bronze"
     << setw(10) << "Total"
     << endl;
     
    for(int i = 0; i < NUMTEAMS; i++) {
        cout << left;
        cout <<  setw(3) << (i + 1);
        cout <<  setw(15) << teamList[i].countryName;
        cout <<  right;
        cout <<  setw(10) << teamList[i].numOfGold;
        cout <<  setw (10) << teamList[i].numOfSilver;
        cout <<  setw (10) << teamList[i].numOfBronze;
        totalMedals = teamList[i].numOfGold + teamList[i].numOfSilver;
        totalMedals += teamList[i].numOfBronze;
        cout <<  setw(10) << totalMedals;
        cout <<  endl;
    }

    return 0;
}