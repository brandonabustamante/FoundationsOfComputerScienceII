#include <iostream> 

using namespace std;

double pizza (int people, int &pizzas, int &slices) {
    int totalSlices = people*3;
    pizzas = totalSlices/8;
    slices = totalSlices%8;
    return pizzas*11.95 + slices*1.75;
}


int main() {
    // p - number of pizzas
    // s - additional slices needed 
    int p = 0,s = 0;

}