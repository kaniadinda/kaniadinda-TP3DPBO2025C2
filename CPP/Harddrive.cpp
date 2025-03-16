#include "Komponen.cpp"

class Harddrive : public Komponen {
private:
    int kapasitas;
public:
    Harddrive() {}
    Harddrive(string nama, int kapasitas) : Komponen(nama) {
        this->kapasitas = kapasitas;
    }
    void tampil() {
        cout << "Harddrive : " << nama << " (" << kapasitas << " GB) " << endl;
    }
};