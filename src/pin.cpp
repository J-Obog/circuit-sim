#include "Pin.hpp"

Pin::Pin() {
    _mode = INPUT; 
    _pull = NONE;    
    _val = LOW; 
}

Pin::Pin(PinMode mode, PinValue val, PinPull pull) {
    _mode = mode; 
    _val = val; 
    _pull = pull; 
}

PinValue Pin::read() const {
    return _val; 
} 

PinMode Pin::get_mode() const {
    return _mode; 
} 

PinPull Pin::get_pull() const {
    return _pull; 
}

void Pin::write(PinValue val) {
    _val = val; 
} 

void Pin::set_mode(PinMode mode) {
    _mode = mode; 
}

void Pin::set_pull(PinPull pull) {
    _pull = pull; 
}