#include <iostream>
#include <string>
#include "QuanLy.h"

QuanLy::QuanLy() {
    this->index = 0;
}

QuanLy::~QuanLy() {
    for (int i = 0; i < index; ++i) {
        delete list[i];
    }
}
    
void QuanLy::NhapDS() {
    int loai;

    std::cout << "Nhap so luong sinh vien: ";
    std::cin >> this->index;

    for(int i = 0; i < index && i < 10; i++) {
        std::cout << "\nNhap loai sinh vien ? 1.DH | 2.CD : ";
        std::cin >> loai;
        if(loai == 1) {
            list[i] = new DH();
        }
        else if(loai == 2) {
            list[i] = new CD();
        }

        list[i]->Nhap();
    }
}
    
void QuanLy::XuatDS() const {
    std::cout << "Danh sach sinh vien\n";
    for(int i = 0; i < index && i < 10; i++) {
        list[i]->Xuat();
    }
}
    
void QuanLy::XuatDSDDK() const {
    std::cout << "Danh sach sinh vien du dieu kien tot nghiep\n";
    for(int i = 0; i < index && i < 10; i++) {
        if(list[i]->isDDK()) {
            list[i]->Xuat();
        }
    }
}

void QuanLy::XuatDSKhongDDK() const {
    std::cout << "Danh sach sinh vien khong du dieu kien tot nghiep\n";
    for(int i = 0; i < index && i < 10; i++) {
        if(!list[i]->isDDK()) {
            list[i]->Xuat();
        }
    }
}

void QuanLy::XuatSinhVienDHDiemTBCaoNhat() const {
    std::cout << "Sinh vien dai hoc diem trung binh cao nhat\n";
    float max = 0.0f;
    int pos = -1;

    for(int i = 0; i < index && i < 10; i++) {
        if(list[i]->he == UIT::dh && list[i]->getDiemTB() > max) {
            max = list[i]->getDiemTB();
            pos = i;
        }
    }

    if(pos != -1) {
        list[pos]->Xuat();
    }
}

void QuanLy::XuatSinhVienCDDiemTBCaoNhat() const {
    std::cout << "Sinh vien cao dang diem trung binh cao nhat\n";
    float max = 0.0f;
    int pos = -1;

    for(int i = 0; i < index && i < 10; i++) {
        if(list[i]->he == UIT::cd && list[i]->getDiemTB() > max) {
            max = list[i]->getDiemTB();
            pos = i;
        }
    }

    if(pos != -1) {
        list[pos]->Xuat();
    }
}

void QuanLy::XuatSoLuongSinhVienKhongDDK() const {
    int count_dh = 0, count_cd = 0;

    for(int i = 0; i < index && i < 10; i++) {
        if(list[i]->he == UIT::dh && !list[i]->isDDK()) {
            count_dh++;
        }
        else if(list[i]->he == UIT::cd && !list[i]->isDDK()) {
            count_cd++;
        }
    }

    std::cout << "So luong sinh vien dai hoc khong du dieu kien tot nghiep: " << count_dh << '\n';
    std::cout << "So luong sinh vien cao dang khong du dieu kien tot nghiep: " << count_cd << '\n';
}

void QuanLy::Menu() {
    std::cout << "\n-----------------------------------------------------------------\n";
    std::cout << "1. Nhap danh sach sinh vien\n";
    std::cout << "2. Xuat danh sach sinh vien\n";
    std::cout << "3. Xuat danh sach sinh vien du dieu kien tot nghiep\n";
    std::cout << "4. Xuat danh sach sinh vien khong du dieu kien tot nghiep\n";
    std::cout << "5. Xuat sinh vien dai hoc diem trung binh cao nhat\n";
    std::cout << "6. Xuat sinh vien cao dang diem trung binh cao nhat\n";
    std::cout << "7. Xuat so luong sinh vien khong du dieu kien tot nghiep\n";
    std::cout << "8. Nhan phim 8 de thoat\n";
    std::cout << "-----------------------------------------------------------------\n";
    int choice;

    std::cout << "Nhap lua chon: ";
    std::cin >> choice;

    while (choice != 8) {
        switch(choice) {
            case 1: NhapDS(); break;
            case 2: XuatDS(); break;
            case 3: XuatDSDDK(); break;
            case 4: XuatDSKhongDDK(); break;
            case 5: XuatSinhVienDHDiemTBCaoNhat(); break;
            case 6: XuatSinhVienCDDiemTBCaoNhat(); break;
            case 7: XuatSoLuongSinhVienKhongDDK(); break;
            default: std::cout << "Lua chon khong hop le. Vui long nhap lai.\n";
        }
        
        std::cout << "\n-----------------------------------------------------------------\n";
        std::cout << "1. Nhap danh sach sinh vien\n";
        std::cout << "2. Xuat danh sach sinh vien\n";
        std::cout << "3. Xuat danh sach sinh vien du dieu kien tot nghiep\n";
        std::cout << "4. Xuat danh sach sinh vien khong du dieu kien tot nghiep\n";
        std::cout << "5. Xuat sinh vien dai hoc diem trung binh cao nhat\n";
        std::cout << "6. Xuat sinh vien cao dang diem trung binh cao nhat\n";
        std::cout << "7. Xuat so luong sinh vien khong du dieu kien tot nghiep\n";
        std::cout << "8. Nhan phim 8 de thoat\n";
        std::cout << "-----------------------------------------------------------------\n";

        std::cout << "Nhap lua chon: ";
        std::cin >> choice;
    }
}