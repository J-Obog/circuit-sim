from typing import Tuple

class BaseComponent:
    def __init__(self, pos: Tuple[int, int], label: str):
        self._x: int = pos[0]
        self._y: int = pos[1]
        self._label: str = label

    def setPos(self, pos: Tuple[int, int]):
        self._x = pos[0]
        self._y = pos[1]

    def getPos(self) -> Tuple[int, int]:
        return (self._x, self._y)

    def setLabel(self, label: str):
        self._label = label

    def getLabel(self) -> str: 
        return self._label