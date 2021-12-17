from csim.base_component import BaseComponent
from csim.pin import Pin
from csim.gen import UidGenerator
from typing import Tuple, List, Optional


class SimCompoment(BaseComponent):
    def __init__(self, pos: Tuple[int, int], label: str, num_pins: int):
        super().__init__(pos, label)
        self._uid = UidGenerator().generate_uid()
        self._pins: List[Optional[Pin]] = [None] * num_pins

    def getUid(self) -> str:
        return self._uid

    def setPin(self, pin: Pin, idx: int):
        self._pins[idx] = pin

    def getPin(self, idx: int) -> Pin: 
        return self._pins[idx]