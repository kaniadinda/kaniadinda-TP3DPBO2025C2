#include "Komponen.cpp"

class Cpu : public Komponen {
private:
    int core;
    float kecepatan;
public:
    Cpu() {}
    Cpu(string nama, int core, float kecepatan) : Komponen(nama) {
        this->core = core;
        this->kecepatan = kecepatan;
    }
    void tampil() {
        cout << "Cpu       : " << nama << " (" << core << " Core) ~" << kecepatan << "GHz" << endl;
    }
};