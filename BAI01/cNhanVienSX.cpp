#include <iostream>
#include <string>
#include <limits>
#include "cNhanVienSX.h"

cNhanVienSX::cNhanVienSX() {
    this->luongCB = 0.0;
    this->soSanPham = 0;
}

void cNhanVienSX::Nhap() {
    std::cout << "Nhap ho ten NVSX: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, this->hoTen);
    
    std::cout << "Nhap nam sinh: ";
    std::cin >> this->namSinh;

    std::cout << "Nhap luong can ban: ";
    std::cin >> this->luongCB;

    std::cout << "Nhap so san pham: ";
    std::cin >> this->soSanPham;
}

void cNhanVienSX::Xuat() const {
    std::cout << "[SX]" << "Ho ten: " << this->hoTen << " - " << "Tuoi: " << 2025 - this->namSinh << " - " << "Luong: " << this->luong << '\n';
}

std::string cNhanVienSX::getLoaiNV() const {
    return "sx";
}

void cNhanVienSX::tinhLuong() {
    this->luong = this->luongCB + this->soSanPham * 5000;
}