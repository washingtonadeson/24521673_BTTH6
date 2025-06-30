#include <iostream>
#include <string>
#include <limits>
#include "nhanVien.h"
#include "lapTrinhVien.h"

lapTrinhVien::lapTrinhVien() {
    this->loai = ltv;
    this->soGioOvertime = 0;
}

void lapTrinhVien::Nhap() {
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

    std::cout << "Nhap so gio overtime: ";
    std::cin >> soGioOvertime;
}

void lapTrinhVien::Xuat() const {
    std::cout << "[Lap trinh vien] " << hoTen << " - " << maNV << " - " << tuoi << " - " << soDT << " - " << email << " - " << luongCB << " - " << soGioOvertime << '\n';
}

double lapTrinhVien::tinhLuong() {
    return luongCB + (soGioOvertime * 200000);
}