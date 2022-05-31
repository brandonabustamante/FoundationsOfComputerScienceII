// Brandon A Bustamante
// Participation Assignment 1
# include <iostream>
# include <iomanip>

/*
  * Problem: 
  * One of the services provided by Green Fields Landscaping is the sale 
  * and delivery of mulch, which is measured and priced by the cubic yard. 
  * 
  * You  have been asked to create a program that will determine the 
  * number of cubic yards of mulch the customer needs and the total 
  * price.
  * 
  * 1. Set the price for a cubic yard of mulch (currently 22.00).
  * 2. Ask the user to input the number of square feet to be covered and the
  * depth of the mulch to be spread over this area.
  * 3. Calculate the number of cubic feet of mulch needed.
  * 4. Calculate the number of cubic yards of mulch needed.
  * 5. Calculate the total price for the mulch.
  * 6. Display the results.
*/
/********************************************************************************/
using namespace std;

int main() {

    const double MULCHPRICEPERCUBYARD = 22.00;
    const double DIVISORFEET = 12.0;
    const int DIVISORYARDS = 27;
    int squareFeet, depthOfMulch;
    double cubicFeet, cubicYards, totalPrice;

    cout << "Enter the number of square feet to be covered: ";
    cin >> squareFeet;

    cout << "Enter the depth of the mulch over the area:";
    cin >> depthOfMulch;

    cubicFeet = squareFeet * (depthOfMulch / DIVISORFEET);
    cubicYards = cubicFeet / DIVISORYARDS;

    totalPrice = cubicYards * MULCHPRICEPERCUBYARD;

    cout << fixed << setprecision(2);
    cout << "Cubic Yards: " << cubicYards << endl;
    cout << "Price of Mulch: " << MULCHPRICEPERCUBYARD << endl;
    cout << "Total Price: " << totalPrice << endl;

    return 0;
}