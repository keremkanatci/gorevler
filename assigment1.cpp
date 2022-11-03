#include <iostream>
#define g 9.80665


int main(){

float t;
std::cout << "Enter time: ";
std::cin >> t; 
std::cout << "Distance: :"<< (t*t)*g/2;

}