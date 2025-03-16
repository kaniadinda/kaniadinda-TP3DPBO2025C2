#include "Komponen.cpp"

class Ram : public Komponen {
private:
    int kapasitas;
    string tipe;
public:
    Ram() {}
    Ram(string nama, int kapasitas, string tipe) : Komponen(nama) {
        this->kapasitas = kapasitas;
        this->tipe = tipe;
    }
    void tampil() {
        cout << "Ram       : " << nama << " (" << kapasitas << " GB) " << tipe << endl;
    }
};