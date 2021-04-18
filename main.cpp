#include "AndGate.h"
#include <iostream>
using namespace std; 



int main() {
    int btn1 = 1; 
    int btn2 = 0; 

    AndGate a(&btn1, &btn2); 

    cout << a.o0 << endl; 

    btn2 = 1; 
    a.setState(); 

    cout << a.o0 << endl; 

    return 0; 
}