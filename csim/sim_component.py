from csim.base_component import BaseComponent
from csim.pin import Pin
from typing import Tuple, List, Dict, Optional


class SimCompoment(BaseComponent):
    def __init__(self, pos: Tuple[int, int], label: str, num_pins: int):
        super().__init__(pos, label)
        self._pinMap: Dict[str, int] = {}
        self._pins: List[Optional[Pin]] = [None] * num_pins

    def setPin(self, pin: Pin, idx: int):
        self._pins[idx] = pin

    def getPin(self, idx: int) -> Pin: 
        return self._pins[idx]

    def resolvedAlias(self, alias: str) -> int:
        return self._pinMap.get(alias, -1)

    def aliasPin(self, alias: str, idx: int):
        self._pinMap[alias] = idx 