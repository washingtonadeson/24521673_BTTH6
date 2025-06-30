#include <iostream>
#include <string>
#include "cQuanLy.h"

cQuanLy::cQuanLy() {
    this->index = 0;
}

cQuanLy::~cQuanLy() {
    for(int i = 0; i < index; i++) {
        delete list[i];
    }
}

void cQuanLy::NhapDS() {
    if(index >= 10) return;

    int luaChon = 0;

    std::cout << "Nhap thong tin cua nhan vien nao? 1. Nhan vien van phong | 2. Nhan vien san xuat\n"
              << "Lua chon: ";
    std::cin >> luaChon;

    if(luaChon == 1) {
        list[index] = new cNhanVienVP();
    }
    else {
        list[index] = new cNhanVienSX();
    }

    list[index]->Nhap();
    ++index;
}

void cQuanLy::XuatDS() const {
    for(int i = 0; i < index; i++) {
        list[i]->Xuat();
    }
}

void cQuanLy::tinhLuongChoNV() const {
    for(int i = 0; i < index; i++) {
        list[i]->tinhLuong();
    }
}

float cQuanLy::tinhTongLuong() const {
    double tong = 0.0;

    for(int i = 0; i < index; i++) {
        tong += list[i]->getLuong();
    }

    return tong;
}

void cQuanLy::XuatNVSXLuongThapNhat() const {
    bool coNVSX = false;
    float min = 0.0;
    cNhanVien* minNV = nullptr;

    for(int i = 0; i < index; i++) {
        if(!coNVSX && list[i]->getLoaiNV() == "sx") {
            coNVSX = true;
            min = list[i]->getLuong();
            minNV = list[i];
        }
        else if(list[i]->getLoaiNV() == "sx" && min > list[i]->getLuong()) {
            min = list[i]->getLuong();
            minNV = list[i];
        }
    }

    if(minNV) {
        minNV->Xuat();
    }
}

void cQuanLy::XuatNVVPTuoiCaoNhat() const {
    bool coNVVP = false;
    int min = 0;
    cNhanVien* minNV = nullptr;

    for(int i = 0; i < index; i++) {
        if(!coNVVP && list[i]->getLoaiNV() == "vp") {
            coNVVP = true;
            min = list[i]->getNamSinh();
            minNV = list[i];
        }
        else if(list[i]->getLoaiNV() == "vp" && min > list[i]->getNamSinh()) {
            min = list[i]->getNamSinh();
            minNV = list[i];
        }
    }

    if(minNV) {
        minNV->Xuat();
    }
}

void cQuanLy::Menu() {
    int choice;

    do {
        std::cout << "1. Nhap danh sach\n";
        std::cout << "2. Xuat danh sach\n";
        std::cout << "3. Tinh luong\n";
        std::cout << "4. Tinh tong luong ma cong ty phai tra\n";
        std::cout << "5. Xuat nvsx luong thap nhat\n";
        std::cout << "6. Xuat nvvp tuoi cao nhat\n";
        std::cout << "7. Bo chon. Nhap 7 de thoat chuong trinh\n";
        std::cout << "Lua chon: "; std::cin >> choice;

        if(choice != 7) {
            switch(choice) {
                case 1: NhapDS(); break;
                case 2: XuatDS(); break;
                case 3: tinhLuongChoNV(); break;
                case 4:
                    std::cout << "Tong luong: " << tinhTongLuong() << '\n';
                    break;
                case 5: XuatNVSXLuongThapNhat(); break;
                case 6: XuatNVVPTuoiCaoNhat(); break;
                default: std::cout << "Lua chon khong hop le. Moi ban chon lai\n";
            }
        }
    } while(choice != 7);
}