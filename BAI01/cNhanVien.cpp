#include <iostream>
#include "cNhanVien.h"

cNhanVien::~cNhanVien() {}
cNhanVien::cNhanVien() {
    this->hoTen = "";
    this->namSinh = 0;
    this->luong = 0.0;
}

std::string cNhanVien::getHoTen() const {
    return this->hoTen;
}

int cNhanVien::getNamSinh() const {
    return this->namSinh;
}

float cNhanVien::getLuong() const {
    return luong;
}