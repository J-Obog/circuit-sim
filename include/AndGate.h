#ifndef ANDGATE_H
#define ANDGATE_H
#include "Component.h" 

class AndGate : public Component {
public:
    int* i0, *i1; 
    int o0; 
    AndGate(); 
    AndGate(int* inputA, int* inputB); 
    ~AndGate(); 
    void setState();
};

AndGate::AndGate() {
    i0 = i1 = nullptr; 
    setState(); 
}

AndGate::AndGate(int* inputA, int* inputB) {
    i0 = inputA; 
    i1 = inputB;
    setState(); 
}

AndGate::~AndGate() {
    delete i0, i1; 
    i0 = nullptr; 
    i1 = nullptr; 
}

void AndGate::setState() {
    if(i0 == nullptr || i1 == nullptr) {
        o0 = -1; 
    } else {
        o0 = (*(i0) == *(i1));  
    }
}


#endif