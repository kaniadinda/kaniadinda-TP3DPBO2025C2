from Komponen import Komponen

class Harddrive(Komponen):
    def __init__(self, nama, kapasitas):
        super().__init__(nama)
        self.kapasitas = kapasitas
    
    def get_info(self):
        return f"{self.nama} ({self.kapasitas} GB)"