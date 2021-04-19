#include <iostream>
#include <CircuitSim/Gates/AndGate.h>
using namespace std; 


int main() {
    int btn1, btn2;
    btn1 = 1; 
    btn2 = 0; 


    AndGate ag(); 
    ag.set(0, &btn1);
    ag.set(1, &btn2); 
    ag.setState();

    cout << ag.out() << endl; 

    return 0; 
}