#include<iostream>

using namespace std;

int main(){
    int room_width {0};
    cout << "Enter room width: ";
    cin >> room_width;
    
    cout << "Room area is " << room_width * 10 << " square feet" << endl;
    
    return 0;
}