#include <iostream>
using namespace std;

int Policz(int a, int b){
    return a * b;       //zamiana dodawania na mnożenie
}
int main() {
    cout << "Hello, World!" << std::endl;
    cout << "Na pierwszym branchu; 2 * 3 = " <<Policz( 2, 3) << endl;
    return 0;
}