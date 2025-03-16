from Komponen import Komponen

class Cpu(Komponen):
    def __init__(self, nama, core, kecepatan):
        super().__init__(nama)
        self.core = core
        self.kecepatan = kecepatan
    
    def get_info(self):
        return f"{self.nama} ({self.core} Core) ~{self.kecepatan}GHz"