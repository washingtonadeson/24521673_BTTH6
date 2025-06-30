#include <iostream>
#include <string>
#include "CD.h"

void CD::Nhap() {
    std::cout << "\nNhap thong tin sinh vien cao dang\n";
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

        he = cd;

        std::cout << "Nhap diem thi tot nghiep: ";
        std::cin >> diemThiTotNghiep;
        std::cin.ignore();
}

void CD::Xuat() const {
        std::cout << "[CD] " << mssv << " - " << hoTen << " - "
                  << diaChi << " - " << tongSoTC << " - "
                  << diemTB << " - " << diemThiTotNghiep << '\n';
}

bool CD::isDDK() const {
    if(tongSoTC >= 120 && diemTB >= 5.0f && diemThiTotNghiep >= 5.0f) {
        return true;
    } else {
        return false;
    }
}

float CD::getDiemTB() const {
    return diemTB;
}