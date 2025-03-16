#pragma once
#include <iostream>
#include <string>
using namespace std;

class Komponen {
protected:
    string nama;
public:
    Komponen() {}
    Komponen(string nama) { this->nama = nama; }
    string getNama() { return nama; }
};