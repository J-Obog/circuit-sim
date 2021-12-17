from csim.component import Component
import enum

class PinState(enum.Enum):
    HIGH = 1
    LOW = 0
    FLOATING = -1

class PinMode(enum.Enum):
    INPUT = 0
    OUTPUT = 1
    BIDIR = 2

class Pin(Component):
    def __init__(self, x: int, y: int, label: str, m: PinMode, v: PinState = PinState.FLOATING):
        super().__init__(x, y, label)
        self.v: PinState = v
        self.m: PinMode = m