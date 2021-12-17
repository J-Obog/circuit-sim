from csim.sim_component import SimCompoment
from csim.pin import Pin, PinMode, PinState
from typing import Tuple

class AndGate(SimCompoment):
    A: int = 0
    B: int = 1
    Q: int = 2
    
    def __init__(self, pos: Tuple[int, int], label: str):
        super().__init__(pos, label, 3)
        self.setPin(Pin((0,0), 'A', PinMode.INPUT), AndGate.A)
        self.setPin(Pin((0,0), 'B', PinMode.INPUT), AndGate.B)
        self.setPin(Pin((0,0), 'Q', PinMode.OUTPUT), AndGate.Q)

    def func(self):
        a = self._pins[AndGate.A].getVal().value
        b = self._pins[AndGate.B].getVal().value
        self._pins[AndGate.Q].setVal(PinState(a * b))