#include <iostream>
#include <string>
#include "DH.h"

void DH::Nhap() {
    std::cout << "\nNhap thong tin sinh vien dai hoc\n";
        std::cout << "Nhap MSSV: ";
        std::cin >> mssv;
        std::cin.ignore();

        std::cout << "Nhap ho ten: ";
        std::getline(std::cin, hoTen);

        std::cout << "Nhap dia chi: ";
        std::getline(std::cin, diaChi);

        std::cout << "Nhap tong so TC: ";
        std::cin >> tongSoTC;

        std::cout << "Nhap diem TB: ";
        std::cin >> diemTB;
        std::cin.ignore();

        he = dh;

        std::cout << "Nhap ten luan van: ";
        std::getline(std::cin, tenLuanVan);

        std::cout << "Nhap diem luan van: ";
        std::cin >> diemLuanVan;
        std::cin.ignore();
}

void DH::Xuat() const {
    std::cout << "[DH] " << mssv << " - " << hoTen << " - "
              << diaChi << " - " << tongSoTC << " - "
              << diemTB << " - " << tenLuanVan
              << " - " << diemLuanVan << '\n';
}

bool DH::isDDK() const {
    if(tongSoTC >= 170 && diemTB >= 5.0f && diemLuanVan >= 5.0f) {
        return true;
    } else {
        return false;
    }
}

float DH::getDiemTB() const {
    return diemTB;
}