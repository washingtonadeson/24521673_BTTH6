#include <iostream>
#include "cBDS.h"
#include "cDat.h"
#include "cNhaPho.h"
#include "cCHCC.h"
#include "cQuanLy.h"

cQuanLy::~cQuanLy() {
    for(int i = 0; i < list.size(); i++) {
        if(list[i] != nullptr) {
            delete list[i];
            list[i] = nullptr;
        }
    }
}

void cQuanLy::Menu() {
    int choice;

    do {
        std::cout << "1. Nhap danh sach cac giao dich\n";
        std::cout << "2. Tinh tong so luong cho tung loai\n";
        std::cout << "3. Tinh trung binh thanh tien cua giao dich can ho chung cu\n";
        std::cout << "4. Cho biet giao dich nha pho co tri gia cao nhat\n";
        std::cout << "5. Xuat danh sach cac giao dich cua thang 12 nam 2024\n";
        std::cout << "6. Nhan phim 6 de thoat\n";
        std::cout << "Moi ban chon: ";
        std::cin >> choice;

        if(choice != 6) {
            switch(choice) {
                case 1: NhapDS(); break;
                case 2: tinhTongSLTungLoai(); break;
                case 3: tinhTBThanhTienCHCC(); break;
                case 4: XuatThongTinNhaPhoGiaTriCaoNhat(); break;
                case 5: XuatDSCacGDThang12Nam2024(); break;
                default: std::cout << "Lua chon khong hop le. Vui long chon lai\n";
            }
        }
    } while (choice != 6);
}

void cQuanLy::NhapDS() {
    int choice;
    cBDS* temp = nullptr;

    std::cout << "Ban can nhap loai giao dich nao? 1. Dat | 2. Nha pho | 3. Can ho chung cu\n";
    std::cout << "Lua chon: ";
    std::cin >> choice;

    if(choice == 1) {
        temp = new cDat();
    }
    else if(choice == 2) {
        temp = new cNhaPho();
    }
    else {
        temp = new cCHCC();
    }

    temp->Nhap();
    list.push_back(temp);
}

void cQuanLy::XuatDS() const {
    for(int i = 0; i < list.size(); i++) {
        list[i]->Xuat();
    }
}

void cQuanLy::tinhTongSLTungLoai() const {
    int soLuongDat = 0;
    int soLuongNP = 0;
    int soLuongCHCC = 0;

    for(int i = 0; i < list.size(); i++) {
        if(list[i]->getLoaiBDS() == "dat") {
            soLuongDat++;
        }
        else if(list[i]->getLoaiBDS() == "nha pho") {
            soLuongNP++;
        }
        else {
            soLuongCHCC++;
        }
    }

    std::cout << "Tong so luong giao dich dat: " << soLuongDat << '\n';
    std::cout << "Tong so luong giao dich nha pho: " << soLuongNP << '\n';
    std::cout << "Tong so luong giao dich can ho chung cu: " << soLuongCHCC << '\n';
}

void cQuanLy::tinhTBThanhTienCHCC() const {
    float tb = 0.0;
    int dem = 0;

    for(int i = 0; i < list.size(); i++) {
        if(list[i]->getLoaiBDS() == "can ho chung cu") {
            tb += list[i]->getThanhTien();
            ++dem;
        }
    }

    std::cout << "Trung binh thanh tien cua giao dich can ho chung cu: " << ((dem) ? tb / dem : 0) << '\n';
}

void cQuanLy::XuatThongTinNhaPhoGiaTriCaoNhat() const {
    cBDS* max = nullptr;
    bool found = false;

    for(int i = 0; i < list.size(); i++) {
        if(!found && list[i]->getLoaiBDS() == "nha pho") {
            found = true;
            max = list[i];
        }
        else if(list[i]->getLoaiBDS() == "nha pho" && max->getThanhTien() < list[i]->getThanhTien()){
            max = list[i];
        }
    }

    if(max) {
        max->Xuat();
    }

    else {
        std::cout << "Khong ton tai giao dich nha pho\n";
    }
}

void cQuanLy::XuatDSCacGDThang12Nam2024() const {
    for(int i = 0; i < list.size(); i++) {
        if(list[i]->getThang() == 12 && list[i]->getNam() == 2024) {
            list[i]->Xuat();
        }
    }
}