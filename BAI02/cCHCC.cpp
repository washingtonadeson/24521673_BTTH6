#include <iostream>
#include <string>
#include "cBDS.h"
#include "cCHCC.h"

cCHCC::cCHCC() {
    maCan = "";
    viTriTang = 1;
}

void cCHCC::TinhThanhTien() {
    if(viTriTang == 1) {
        thanhTien = donGia * dienTich * 2;
    }
    else if(viTriTang >= 15) {
        thanhTien = donGia * dienTich * 1.2;
    }
    else {
        thanhTien = donGia * dienTich;
    }
}

void cCHCC::Nhap() {
    NhapThongTinChung();

    std::cout << "Nhap ma can: ";
    std::cin >> maCan;

    do {
        std::cout << "Nhap vi tri tang: ";
        std::cin >> viTriTang;
    } while (viTriTang <= 0);

    TinhThanhTien();
}

void cCHCC::Xuat() const {
    std::cout << "[Can ho chung cu] ";
    XuatThongTinChung();

    std::cout << "Ma can: " << maCan << " - " << "Vi tri tang: " << viTriTang << " - " << "Thanh tien: " << thanhTien << '\n';
}

std::string cCHCC::getLoaiBDS() const {
    return "can ho chung cu";
}