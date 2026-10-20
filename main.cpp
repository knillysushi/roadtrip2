#include <iostream>
using namespace std;

int main() {

    int numPass;
    double totalDist;
    double fuelEff;
    double gasPrice;
    float mealCost;

    double fuelUsed;
    double fuelCost;
    double totalCost; // grand total, everyone paying all together
    double costPerPerson; // what they need to pay
    double mealTotal; // all meals together

    // Ask for number of passengers
    cout << "How many passengers are there?";
    cin >> numPass;
    cout << "What was the distance traveled?(km): ";
    cin >> totalDist;
    cout << "What was the car's efficiency(L/100km): ";
    cin >> fuelEff;
    cout << "Enter the gas price: $";
    cin >> gasPrice;
    cout << "How much for each person's meal? $";
    cin >> mealCost;

    // calculate the fuel used during the road trip
    fuelUsed = (totalDist / 100) * fuelEff;
    //cout << "The amount of fuel used is: " << fuelUsed;
    fuelCost = fuelUsed * gasPrice;

    // TODO - calculate cost per person...bye

    //calculate meal cost
    mealTotal = mealCost * numPass;

    // calculate for evb2
    totalCost = mealTotal + fuelCost;
    costPerPerson = totalCost / numPass;

    cout << "---------------------------------------------------------" << endl;
    cout << "Number of passengers: " << numPass << endl;
    cout << "Distance travelled: " << totalDist << "km" << endl;
    cout << "Car efficiency: " << fuelEff << "L/100km" << endl;
    cout << "Fuel used: " << fuelUsed << "L" << endl;
    cout << "Cost of fuel: $" << fuelCost << endl;
    cout << "Cost of fuel per person: $" << fuelCost/numPass << endl;
    cout << "Meal cost per person and group: $" << mealCost << " and $" << mealTotal << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Grand total: $" << totalCost << endl;
    cout << "Total cost per person: $" << costPerPerson << endl;
    cout << "Thank you for the road trip! E-transfer the money to 6767nilli6767" << endl;
    cout << "---------------------------------------------------------";



    return 0;
}