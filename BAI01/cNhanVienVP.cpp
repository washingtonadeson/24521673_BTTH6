#include <iostream>
#include <string>
#include <limits>
#include "cNhanVienVP.h"

cNhanVienVP::cNhanVienVP() {
    this->soNgayLamViec = 0;
}

void cNhanVienVP::Nhap() {
    std::cout << "Nhap ho ten NVVP: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, this->hoTen);
    
    std::cout << "Nhap nam sinh: ";
    std::cin >> this->namSinh;

    std::cout << "Nhap so ngay lam viec: ";
    std::cin >> this->soNgayLamViec;
}

void cNhanVienVP::Xuat() const {
    std::cout << "[VP]" << "Ho ten: " << this->hoTen << " - " << "Tuoi: " << 2025 - this->namSinh << " - " << "Luong: " << this->luong << '\n';
}

std::string cNhanVienVP::getLoaiNV() const {
    return "vp";
}

void cNhanVienVP::tinhLuong() {
    this->luong = (int)10E5 * this->soNgayLamViec;
}