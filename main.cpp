#include <iostream>

int Policz(int a, int b){
    return a * b;       //zamiana dodawania na mnożenie
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Na pierwszym branchu; 2 * 3 = " <<Policz( 2, 3) << std::endl;
    return 0;
}