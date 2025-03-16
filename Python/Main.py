from Komputer import Komputer
from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive

def menu():
    print("\nMenu:")
    print("1. Tambah Komputer")
    print("2. Edit Komputer")
    print("3. Hapus Komputer")
    print("4. Tampilkan Komputer")
    print("5. Keluar")
    return input("Pilih: ")

komputer_list = []

# hardcoded data
pc_abdul = Komputer("PC Abdul")
pc_abdul.set_cpu(Cpu("Intel Core i7", 8, 3.4))
pc_abdul.tambah_ram(Ram("Corsair Vengeance", 16, "DDR5"))
pc_abdul.set_harddrive(Harddrive("SSD Samsung Evo", 1024))
komputer_list.append(pc_abdul)

while True:
    pilihan = menu()
    
    if pilihan == "1":
        nama = input("Nama komputer: ")
        komputer = Komputer(nama)
        
        nama_cpu = input("Nama CPU: ")
        core = int(input("Core: "))
        kecepatan = float(input("Kecepatan (GHz): "))
        komputer.set_cpu(Cpu(nama_cpu, core, kecepatan))
        
        jumlah_ram = int(input("Jumlah RAM: "))
        for _ in range(jumlah_ram):
            nama_ram = input("Nama RAM: ")
            kapasitas = int(input("Kapasitas (GB): "))
            tipe = input("Tipe: ")
            komputer.tambah_ram(Ram(nama_ram, kapasitas, tipe))
        
        nama_harddrive = input("Nama Harddrive: ")
        kapasitas_hd = int(input("Kapasitas (GB): "))
        komputer.set_harddrive(Harddrive(nama_harddrive, kapasitas_hd))
        
        komputer_list.append(komputer)
    
    elif pilihan == "2":
        nama_edit = input("Nama komputer yang ingin diedit: ")
        for komputer in komputer_list:
            if komputer.nama == nama_edit:
                komputer.tampil()
                komputer.nama = input("Nama baru: ")
                break
    
    elif pilihan == "3":
        nama_hapus = input("Nama komputer yang ingin dihapus: ")
        komputer_list = [k for k in komputer_list if k.nama != nama_hapus]
    
    elif pilihan == "4":
        for komputer in komputer_list:
            komputer.tampil()
            print()
    
    elif pilihan == "5":
        break
