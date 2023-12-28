// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int sRoom, lRoom;
    const int priceS = 25, priceL = 35;
    double cost, tax, totalEst;
    
    cout << "Frank's Carpet Cleaning Service" << endl;
    cout << "Charges: " << endl  << "\t$25 per small room\n" << "\t$35 per large room\n";
    cout << "Sales tax rate is 6%\n";
    cout << "Estimates are valid for 30 days\n\n";

    cout << "------------------------------------" << endl << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: ";
    cin >> sRoom;
    cout << "Number of large rooms: ";
    cin >> lRoom;
    cout << "Price per small room: $" << priceS << endl;
    cout << "Price per large room: $" << priceL << endl;
    cost = (sRoom * priceS) + (lRoom * priceL);
    cout << "Cost: $" << cost << endl;
    tax = cost * 0.06;
    cout << "Tax: $" << tax << endl;
    cout << "================================" << endl;
    totalEst = cost + tax;
    cout << "Total estimate: $" << totalEst << endl;
    cout << "This estimate is valid for 30 days";
    return 0;
}
