from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, nama, kapasitas, tipe):
        super().__init__(nama)
        self.kapasitas = kapasitas
        self.tipe = tipe
    
    def get_info(self):
        return f"{self.nama} ({self.kapasitas} GB) {self.tipe}"