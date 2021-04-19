#ifndef AND_GATE_H 
#define AND_GATE_H
#include <CircuitSim/Component.h>

class AndGate : public Component {
public:
    AndGate(int numInputs); 
    void setState(); 
};

AndGate::AndGate(int numInputs = 2) {
    if(numInputs < 2)
        numInputs = -1; 

    Component::Component(numInputs, 1);  
}

void AndGate::setState() {
    int p = in(0);   
    
    for(int i = 1; i < inputSize; i++)
        p = p * in(i); 

    outputs[0] = p;  
}

#endif