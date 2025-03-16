#include "Komputer.cpp"

void menu() {
    cout << "\nMenu:" << endl;
    cout << "1. Tambah Komputer" << endl;
    cout << "2. Edit Komputer" << endl;
    cout << "3. Hapus Komputer" << endl;
    cout << "4. Tampilkan Komputer" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih: ";
}

int main() {
    Komputer komputer[10];
    int jumlahKomputer = 1; // sudah ada 1 komputer di awal
    int pilihan;

    // data komputer di hardcode
    komputer[0].setNama("PC Abdul");
    komputer[0].setCpu(Cpu("Intel Core i7", 8, 3.4));
    komputer[0].tambahRam(Ram("Corsair Vengeance", 16, "DDR5"));
    komputer[0].setHarddrive(Harddrive("SSD Samsung Evo", 1024));

    do {
        menu();
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            if (jumlahKomputer < 10) {
                string nama, cpuNama, ramNama, harddriveNama, ramTipe;
                int core, ramKapasitas, harddriveKapasitas;
                float kecepatan;
                
                cout << "Nama komputer: "; getline(cin, nama);
                komputer[jumlahKomputer].setNama(nama);
                
                cout << "Nama CPU: "; getline(cin, cpuNama);
                cout << "Core: "; cin >> core;
                cout << "Kecepatan (GHz): "; cin >> kecepatan;
                cin.ignore();
                komputer[jumlahKomputer].setCpu(Cpu(cpuNama, core, kecepatan));
                
                cout << "Nama RAM: "; getline(cin, ramNama);
                cout << "Kapasitas (GB): "; cin >> ramKapasitas;
                cout << "Tipe: "; cin >> ramTipe;
                cin.ignore();
                komputer[jumlahKomputer].tambahRam(Ram(ramNama, ramKapasitas, ramTipe));
                
                cout << "Nama Harddrive: "; getline(cin, harddriveNama);
                cout << "Kapasitas (GB): "; cin >> harddriveKapasitas;
                cin.ignore();
                komputer[jumlahKomputer].setHarddrive(Harddrive(harddriveNama, harddriveKapasitas));

                jumlahKomputer++;
            } else {
                cout << "Penyimpanan penuh!" << endl;
            }
        }
        else if (pilihan == 2) {
            int idx;
            cout << "Masukkan nomor komputer yang ingin diedit: "; cin >> idx;
            if (idx >= 0 && idx < jumlahKomputer) {
                string nama;
                cout << "Nama komputer baru: "; cin.ignore(); getline(cin, nama);
                komputer[idx].setNama(nama);
            } else {
                cout << "Nomor komputer tidak valid!" << endl;
            }
        }
        else if (pilihan == 3) {
            int idx;
            cout << "Masukkan nomor komputer yang ingin dihapus: "; cin >> idx;
            if (idx >= 0 && idx < jumlahKomputer) {
                for (int i = idx; i < jumlahKomputer - 1; i++) {
                    komputer[i] = komputer[i + 1];
                }
                jumlahKomputer--;
                cout << "Komputer berhasil dihapus." << endl;
            } else {
                cout << "Nomor komputer tidak valid!" << endl;
            }
        }
        else if (pilihan == 4) {
            for (int i = 0; i < jumlahKomputer; i++) {
                komputer[i].tampil();
                cout << endl;
            }
        }
    } while (pilihan != 5);

    return 0;
}