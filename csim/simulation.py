from csim.sim_component import SimCompoment
from csim.gen import UidGenerator
from typing import Dict, Optional, List, Tuple

class Simulation:
    def __init__(self):
        self.__compMap: Dict[str, SimCompoment] = {}
        self.__connections: List[Tuple[str, str]] = [] 

    def addComponent(self, component: SimCompoment):
        uid = UidGenerator().generate_uid()
        self.__compMap[uid] = component

    def getComponent(self, uid: str) -> Optional[SimCompoment]:
        return self.__compMap(uid, None)