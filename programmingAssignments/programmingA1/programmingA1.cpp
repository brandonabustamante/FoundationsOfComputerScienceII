#include <iostream>
#include <iomanip>
#include <limits>

// Brandon A Bustamante
// Net ID: yxx5
// Programming Assignment #1

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
  * 1.Print a numbered list of the Countries with column headers and corresponding
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
  * 
  * 2.The user is prompted enter the country number or quit (enter 0 to quit)
  * 
  * 3.If the country number is not 0, then the user is prompted to enter the
  * medal type awarded (G for gold, S for silver, and B for bronze). And, if
  * the input is valid, the medal count for the indicated country is incremented
  * appropriately.
  * 
  * 4.The loop repeats until the user enters 0 to quit.
  * 
  * When the user quits the program, the program should display a message
  * indicating the total medals awarded to all countries, and which country
  * has the most Gold medals.
  * 
  * Your program must include these four functions
  * 
  * 1.One to display the table of countries, given the array of Countries.
  * 
  * 2.One to update the medal counts: given the array of Countries, a country
  * number, and a medal character, it increments the appropriate medal count.
  * This function should NOT contain a loop, it should NOT do any input/output.
  * The main program loop should be in main. If the country number or medal
  * character is invalid it should do nothing (not output an error message).
  * 
  * 3.One to determine the total number of medals awarded, given the array of
  * Countries, it should NOT do any input/output.
  * 
  * 4.One to determine which country has the most gold medals, given the array of
  * Countries, it should NOT do any input/output.
*/

/********************************************************************************/

using namespace std;

struct Teams {
    string countryName;
    int numOfGold;
    int numOfSilver;
    int numOfBronze;
};

// Function prototypes
void displayList(Teams[]);
void incrementMedal(Teams[],int, char);
int totalMedalsEarned(Teams[]);
int maxGold(Teams[]);

// Global variables
const int ARRSIZE = 8;

/********************************************************************************/
// Required function 1
/*
  * Function name: 
  *     displayList(Teams teamList[])
  *
  * Function description:
  *     outputs the country's name and the number of Gold, Silver, and Bronze
  *     medals won. The total medals of all types are calculated and displayed
  *     in the last column. Nothing is returned.
  * 
  * Variables:
  *     Teams teamList[]: is the array containing all the information for all
  *     teams
*/
void displayList(Teams teamList[]) {
    int medalsPerTeam;

    // Table headings
     cout << left << setw(3) << "N" << setw(15) << "Country"
     << right << setw(10) << "Gold" << setw (10) << "Silver"
     << setw (10) << "Bronze" << setw(10) << "Total" << endl;
     
    for(int i = 0; i < ARRSIZE; i++) {
        // Calculating the total by country
        medalsPerTeam = teamList[i].numOfGold + teamList[i].numOfSilver;
        medalsPerTeam += teamList[i].numOfBronze;
        
        // Output format from the assignment page
        cout << left <<  setw(3) << (i + 1)
             <<  setw(15) << teamList[i].countryName
             <<  right <<  setw(10) << teamList[i].numOfGold
             <<  setw (10) << teamList[i].numOfSilver
             <<  setw (10) << teamList[i].numOfBronze
             <<  setw(10) << medalsPerTeam <<  endl;
    }
    return;
}

/********************************************************************************/
// Required function 2
/*
  * Function name:
  *     incrementMedal(Teams teamList[],int num, char medalType)
  * 
  * Function description: 
  *     increments the medal type awarded to the given country's
  *     team. If no valid input is detected, nothing is done, and the return type
  *     is void
  * 
  * Variables
  *     Teams teamList[]: is the array containing all the information for all teams
  *     int index: The index of the country being awarded a medal
  *     char medalType: 'G' , 'S', or 'B' 
*/ 
void incrementMedal(Teams teamList[],int index, char medalType) {
    switch(medalType) {
        case 'G':
        case 'g':
            teamList[index].numOfGold++;
            break;
        case 'S':
        case 's':
            teamList[index].numOfSilver++;
            break;
        case 'B':
        case 'b':
            teamList[index].numOfBronze++;
            break;
        default:
            // Do Nothing
            return;
}
    return;

}

/********************************************************************************/
// Required function 3
/*
  * Function name:
  *     totalMedalsEarned(Teams teamList[])
  * 
  * Function description: 
  *     The function will calculate the total medals earned by all teams
  *     regardless of the type and then return the value to main
  * 
  * Variables
  *     Teams teamList[]: is the array containing all the information for all teams
*/ 
int totalMedalsEarned(Teams teamList[]) {
    int medalTotal = 0;
    for (int i = 0; i < ARRSIZE; i++) {
        medalTotal += teamList[i].numOfGold;
        medalTotal += teamList[i].numOfSilver;
        medalTotal += teamList[i].numOfBronze;
    }
    return medalTotal;
}

/********************************************************************************/
// Required function 4
/*
  * Function name:
  *     maxGold(Teams teamList[])
  * 
  * Function description: 
  *    The function will find the country with the most gold medals and return
  *    the index of the team to main
  * 
  * Variables
  *     Teams teamList[]: is the array containing all the information for all teams
  *     int index: The index of the country being awarded a medal
*/ 
int maxGold(Teams teamList[]) {
    int max = teamList[0].numOfGold;
    int index = 0;

    for(int i = 1; i < ARRSIZE; i++) {
        if (max < teamList[i].numOfGold) {
            max = teamList[i].numOfGold;
            index = i;
        }
    }
    return index;
}

/********************************************************************************/
int main() {
    // Delcaring variables
    int userInput = -1;
    int index;
    int totalMedals = 0;
    char userSelection;

    // Declaring and initializing Teams array with given information
    Teams teamList[] = {{"Australia", 11, 14, 12},
                        {"Canada", 5, 0, 1},
                        {"China", 9, 14, 11},
                        {"Great Britain", 8, 4, 8},
                        {"Japan",8, 10, 10},
                        {"Netherlands", 7, 6, 7},
                        {"Russia", 6, 10, 8},
                        {"USA", 10, 6, 7}};

    // Function call
    displayList(teamList);

    while (userInput != 0) {
        cout << "Enter the country number (0 to quit):" << endl;
        cin >> userInput;
        // Program ends
        if (userInput == 0) {
            // Function call
            totalMedals = totalMedalsEarned(teamList);
            cout << "Total medals Awarded: " << totalMedals << endl;

            // Function call
            index = maxGold(teamList);
            cout << "Country with the most Gold Medals: "
                 << teamList[index].countryName << endl;

            return 0;
        }
        // Program continues
        else {
            cout << "Enter the medal type (G,S, or B):" << endl;
            cin >> userSelection;
            // Function calls
            incrementMedal(teamList, userInput -1, userSelection);
            displayList(teamList);
        }
    }    
    return 0;
}