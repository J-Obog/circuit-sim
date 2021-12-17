from csim.sim_component import SimCompoment
from csim.gen import UidGenerator
from typing import Dict


class Simulation:
    def __init__(self):
        self.__compMap: Dict[str, SimCompoment] = {}

    def addComponent(self, component: SimCompoment):
        uid = UidGenerator().generate_uid()
        self.__compMap[uid]