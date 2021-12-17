from datetime import datetime
from random import randint

class UidGenerator:
    cntr = 0 
    def __init__(self):
        UidGenerator.cntr += 1
        
    def generate_uid(gen_seed: int) -> str:
        r_pt = randint(1000, 9999)
        t_pt = int(datetime.timestamp(datetime.now()))
        return f'{r_pt}{t_pt}{UidGenerator.cntr}'