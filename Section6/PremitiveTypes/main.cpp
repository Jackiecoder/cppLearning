#include<iostream>

using namespace std;

int main(){
    /*
     * Character Type
     */
    char middle_initial {'J'};
    cout << "My middle initial is " << middle_initial << endl;
    
    /*
     * Integer Type 
     */
    unsigned short int exam_score1 {55};
    unsigned short exam_score2 {56};
    cout << "Exam score 1 is " << exam_score1 << endl;
    cout << "Exam score 2 is " << exam_score2 << endl;
    
    int exam_score3 {60};
    cout << "Exam score 3 is " << exam_score3 << endl;

    long score4 {20610000};
    cout << "Score is " << score4 << endl;

    long people_on_earth {7'600'000'000};
    cout << "People on earth is " << people_on_earth << endl;
    
    long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "distance_to_alpha_centauri is " << distance_to_alpha_centauri << endl;
    
    /*
     * Floating point Type
     */ 
    float car_payment {401.23};
     
    double pi{3.14159};
     
    long double large_amount {2.7e120};
     
    cout << car_payment << " " << pi << " " << large_amount << endl; 
    
    /*
     * Boolean Type
     */
    bool game_over {true};
    cout << "The value of game_over is " << game_over << endl; 
    
    
    /*
     * Overflow example
     */
    short num1 {30000};
    short num2 {1000};
    int product {num1 * num2}; // if use "short product {num1 * num2} here, there will be a compiler error."
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
    
}