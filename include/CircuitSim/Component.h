#ifndef COMPONENT_H
#define COMPONENT_H 



class Component {
protected:
    int** inputs; 
    int* outputs; 
    int inputSize, outputSize; 

public:
    Component(int numInputs, int numOutputs);
    ~Component(); 
    virtual void setState() = 0; 
};

Component::Component(int numInputs, int numOutputs) {
    inputs = new int*[numInputs];
    outputs = new int[numOutputs]; 

    for(int i = 0; i < numInputs; i++)
        inputs[i] = nullptr; 

    for(int i = 0; i < numOutputs; i++)
        outputs[i] = -1; 

    inputSize = numInputs; 
    outputSize = outputSize;  
}

Component::~Component() {
    for(int i = 0; i < inputSize; i++)
        delete inputs[i]; 
    
    delete[] inputs; 
    delete outputs; 
}

#endif