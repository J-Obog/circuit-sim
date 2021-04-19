#ifndef COMPONENT_H
#define COMPONENT_H 

class Component {
protected:
    int** inputs; 
    int* outputs; 
    int inputSize, outputSize; 

public:
    Component();
    Component(int numInputs, int numOutputs);
    ~Component(); 
    virtual void setState() {}; 
    int& pinOut(int pin) const;
    int pinIn(int pin) const; 
    void pinIn(int pin, int* input); 
};

Component::Component() {
    outputs = new int[0]; 
    inputs = new int*[0];  

    inputSize = 0; 
    outputSize = 0;
 
    setState(); 
}

Component::Component(int numInputs, int numOutputs) {
    inputSize = (numInputs >= 0) ? numInputs : 0; 
    outputSize = (numOutputs >= 0) ? numOutputs : 0; 

    outputs = new int[outputSize]; 
    inputs = new int*[inputSize]; 

    setState();  
}

Component::~Component() {
    delete[] inputs;
    delete outputs;  
} 

int& Component::pinOut(int pin) const {
    if(pin >= 0 && pin < outputSize)
        return outputs[pin]; 
}

int Component::pinIn(int pin) const {
    if(pin >= 0 && pin < inputSize)
        return *(inputs[pin]); 
} 

void Component::pinIn(int pin, int* input) {
    if(pin >= 0 && pin < inputSize) 
        inputs[pin] = input; 
} 

#endif