
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    const double price_small_room {25.0};
    const double price_large_room {35.0};
    const double sale_tax_rate {0.06};
    const int estimate_valid_days {30};
    int number_of_small_room;
    int number_of_large_room;
    
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: ";
    cin >> number_of_small_room;
    cout << "Number of large rooms: ";
    cin >> number_of_large_room;
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room;
    double total_cost = number_of_large_room * price_large_room + number_of_small_room * price_small_room;
    cout << "Cost : $" << total_cost << endl;
    cout << "Tax: $" << total_cost * sale_tax_rate << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << total_cost * (1 + sale_tax_rate) << endl;
    cout << "This estimate is valid for " << estimate_valid_days << " days";
 
    cout << endl;
    return 0;
}
