#pragma once
#include <vector>
#include <pin.hpp> 


class Circuit {
    protected:
        std::vector<Circuit> _components; 
        std::vector<Pin> _pins; 

    public:
        Circuit(); 
        virtual void set_state() = 0; 
};

