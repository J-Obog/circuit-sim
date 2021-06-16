#pragma once

enum PinMode { INPUT, OUTPUT, BIDIR };
enum PinPull { UP, DOWN, NONE}; 
enum PinValue { HIGH = 1, LOW = 0, FLOATING = -1 }; 


class Pin {
    private:
        PinMode _mode;
        PinPull _pull; 
        PinValue _val;
    public:
        Pin(); 
        Pin(PinMode mode, PinValue val, PinPull pull); 
        PinValue read() const; 
        PinMode get_mode() const;
        PinPull get_pull() const; 
        void write(PinValue val); 
        void set_mode(PinMode mode);
        void set_pull(PinPull pull);
};