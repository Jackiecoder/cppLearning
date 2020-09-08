#include<iostream>

extern int x;
int main(){
    // This cpp file can pass complie, but can't build.
    std::cout << x;
    return 0;
}