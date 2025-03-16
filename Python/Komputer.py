from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive

class Komputer:
    def __init__(self, nama):
        self.nama = nama
        self.cpu = None
        self.ram_list = []
        self.harddrive = None
    
    def set_cpu(self, cpu):
        self.cpu = cpu
    
    def tambah_ram(self, ram):
        self.ram_list.append(ram)
    
    def set_harddrive(self, harddrive):
        self.harddrive = harddrive
    
    def tampil(self):
        print(f"Nama      : {self.nama}")
        if self.cpu:
            print(f"Cpu       : {self.cpu.get_info()}")
        for ram in self.ram_list:
            print(f"Ram       : {ram.get_info()}")
        if self.harddrive:
            print(f"Harddrive : {self.harddrive.get_info()}")