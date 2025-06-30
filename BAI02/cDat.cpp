#include <iostream>
#include <string>
#include "cBDS.h"
#include "cDat.h"

cDat::cDat() {
    loaiDat = 'A'; // Mac dinh la loai A
}

void cDat::TinhThanhTien() {
    if(loaiDat == 'B' || loaiDat == 'C') {
        thanhTien = dienTich * donGia;
    }
    else{
        thanhTien = dienTich * donGia * 1.5;
    }
}

void cDat::Nhap() {
    NhapThongTinChung();

    do {
        std::cout << "Nhap loai dat: ";
        std::cin >> loaiDat;
    } while(loaiDat != 'A' && loaiDat != 'B' && loaiDat != 'C');

    TinhThanhTien();
}

void cDat::Xuat() const {
    std::cout << "[Dat] ";
    XuatThongTinChung();

    std::cout << "Loai dat: " << loaiDat << " - " << "Thanh tien: " << thanhTien << '\n';
}

std::string cDat::getLoaiBDS() const {
    return "dat";
}