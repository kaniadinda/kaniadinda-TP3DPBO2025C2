#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"

class Komputer {
private:
    string nama;
    Cpu cpu;
    Ram ram[10];
    Harddrive harddrive;
    int jumlahRam;
public:
    Komputer() { jumlahRam = 0; }
    void setNama(string nama) { this->nama = nama; }
    void setCpu(Cpu cpu) { this->cpu = cpu; }
    void setHarddrive(Harddrive harddrive) { this->harddrive = harddrive; }
    void tambahRam(Ram r) {
        if (jumlahRam < 10) {
            ram[jumlahRam++] = r;
        } else {
            cout << "RAM penuh!\n";
        }
    }
    void tampil() {
        cout << "Informasi Komputer:" << endl;
        cout << "Nama      : " << nama << endl;
        cpu.tampil();
        for (int i = 0; i < jumlahRam; i++) {
            ram[i].tampil();
        }
        harddrive.tampil();
    }
};