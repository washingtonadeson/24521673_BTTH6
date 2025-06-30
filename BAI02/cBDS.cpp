#include <iostream>
#include <string>
#include <limits>
#include "cBDS.h"

cBDS::~cBDS() {}
cBDS::cBDS() {
    maGiaoDich = "";
    ngayGiaoDich = 01010001;
    donGia = 0.0;
    dienTich = 0.0;
    thanhTien = 0.0;
}

void cBDS::NhapThongTinChung() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Nhap ma giao dich: ";
    std::getline(std::cin, maGiaoDich);

    std::cout << "Nhap ngay giao dich: ";
    std::cin >> ngayGiaoDich;

    std::cout << "Nhap don gia: ";
    std::cin >> donGia;

    std::cout << "Nhap dien tich: ";
    std::cin >> dienTich;
}

void cBDS::XuatThongTinChung() const {
    std::cout << "Ma giao dich: " << maGiaoDich
              << " - " << "Ngay giao dich: " << getNgay() << "/" << getThang() << "/" << getNam()
              << " - " << "Don gia: " << donGia << "$" << " - " << "Dien tich: " << dienTich << " - ";
}

int cBDS::getNgay() const {
    return ngayGiaoDich / 1000000;
}

int cBDS::getThang() const {
    return (ngayGiaoDich / 10000) % 100;
}

int cBDS::getNam() const {
    return ngayGiaoDich % 10000;
}

float cBDS::getThanhTien() const {
    return thanhTien;
}