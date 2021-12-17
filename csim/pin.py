from csim.base_component import BaseComponent
from typing import Tuple
import enum

class PinState(enum.Enum):
    HIGH = 1
    LOW = 0
    FLOATING = -1

class PinMode(enum.Enum):
    INPUT = 0
    OUTPUT = 1
    BIDIR = 2

class Pin(BaseComponent):
    def __init__(self, pos: Tuple[int, int], label: str, m: PinMode, v: PinState = PinState.FLOATING):
        super().__init__(pos, label)
        self.__v: PinState = v
        self.__m: PinMode = m
    
    def setVal(self, v: PinState):
        self.__v = v
    
    def getVal(self) -> PinState:
        return self.__v

    def setMode(self, m: PinMode):
        self._m = m

    def getMode(self) -> PinMode:
        return self.__m
