#include <iostream>
#include <string>
#include <limits>
#include "nhanVien.h"
#include "kiemChungVien.h"

kiemChungVien::kiemChungVien() {
    this->loai = kcv;
    this->soLoiPhatHien = 0;
}

void kiemChungVien::Nhap() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Nhap ma nhan vien: ";
    std::getline(std::cin, maNV);

    std::cout << "Nhap ho ten: ";
    std::getline(std::cin, hoTen);

    std::cout << "Nhap tuoi: ";
    std::cin >> tuoi;

    std::cout << "Nhap so dien thoai: ";
    std::cin >> soDT;

    std::cin.ignore();
    std::cout << "Nhap email: ";
    std::getline(std::cin, email);

    std::cout << "Nhap luong co ban: ";
    std::cin >> luongCB;

    std::cout << "Nhap so loi phat hien duoc: ";
    std::cin >> soLoiPhatHien;
}

void kiemChungVien::Xuat() const {
    std::cout << "[Kiem chung vien] " << hoTen << " - " << maNV << " - " << tuoi << " - " << soDT << " - " << email << " - " << luongCB << " - " << soLoiPhatHien << '\n';
}

double kiemChungVien::tinhLuong() {
    return luongCB + (soLoiPhatHien * 50000);
}