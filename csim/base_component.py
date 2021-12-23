from _typeshed import Self
from typing import Tuple

class BaseComponent:
    def __init__(self, x: int, y: int, w: int, h: int, label: str):
        self._x: int = x
        self._y: int = y
        self._w: int = w
        self._h: int = h
        self._label: str = label

    def setBounds(self, w: int, h: int):
        self._w = w
        self._h = h

    def getBounds(self) -> Tuple[int, int]:
        return (self._w, self._h)

    def setPos(self, x: int, y: int):
        self._x = x
        self._y = y

    def getPos(self) -> Tuple[int, int]:
        return (self._x, self._y)

    def setLabel(self, label: str):
        self._label = label

    def getLabel(self) -> str: 
        return self._label