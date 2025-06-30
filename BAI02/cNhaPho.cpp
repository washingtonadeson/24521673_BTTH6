#include <iostream>
#include <string>
#include <limits>
#include "cBDS.h"
#include "cNhaPho.h"

cNhaPho::cNhaPho() {
    loaiNha = "thuong"; // mac dinh la "thuong"
    diaChi = "";
}

void cNhaPho::TinhThanhTien() {
    if(loaiNha == "thuong") {
        thanhTien = donGia * dienTich * 0.9;
    }
    else {
        thanhTien = donGia * dienTich;
    }
}

void cNhaPho::Nhap() {
    NhapThongTinChung();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    do {
        std::cout << "Nhap loai nha: ";
        std::getline(std::cin, loaiNha);
    } while (loaiNha != "thuong" && loaiNha != "cao cap");

    std::cout << "Nhap dia chi: ";
    std::getline(std::cin, diaChi);

    TinhThanhTien();
}

void cNhaPho::Xuat() const {
    std::cout << "[Nha pho] ";
    XuatThongTinChung();

    std::cout << "Loai nha: " << loaiNha << " - " << "Dia chi: " << diaChi << " - " << "Thanh tien: " << thanhTien << '\n';
}

std::string cNhaPho::getLoaiBDS() const {
    return "nha pho";
}