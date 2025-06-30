#include <iostream>
#include <string>
#include "nhanVien.h"
#include "lapTrinhVien.h"
#include "kiemChungVien.h"
#include "QuanLy.h"

QuanLy::~QuanLy() {
    for(int i = 0; i < soLuongNV; ++i) {
        delete danhSachNV[i];
    }
    delete[] danhSachNV;
}

void QuanLy::NhapDS() {
    std::cout << "\nNhap danh sach\n";
    int choice = -1;
    std::cout << "Nhap so luong nhan vien: ";
    std::cin >> soLuongNV;

    danhSachNV = new nhanVien* [soLuongNV];

    for(int i = 0; i < soLuongNV; i++) {
        do {
            std::cout << "\nNhap thong tin nhan vien nao ? 1. Lap trinh vien | 2. Kiem chung vien\n";
            std::cin >> choice;
        } while (choice != 1 && choice != 2);

        if(choice == 1) danhSachNV[i] = new lapTrinhVien();
        else danhSachNV[i] = new kiemChungVien();

        danhSachNV[i]->Nhap();
    }
}

void QuanLy::XuatDS() const {
    std::cout << "\nXuat danh sach\n";

    for(int i = 0; i < soLuongNV; i++) {
        danhSachNV[i]->Xuat();
    }
}

void QuanLy::XuatDSNVLuongThap() const {
    double aver = 0.0;

    for(int i = 0; i < soLuongNV; i++) {
        aver += danhSachNV[i]->tinhLuong();
    }

    aver /= soLuongNV;

    std::cout << "\nXuat danh sach nhan vien co luong thap hon muc trung binh\n";

    for(int i = 0; i < soLuongNV; i++)
        if(danhSachNV[i]->tinhLuong() < aver) danhSachNV[i]->Xuat();
}

void QuanLy::XuatNVLuongCaoNhat() const {
    std::cout << "\nXuat nhan vien luong cao nhat\n";

    int max = 0;

    for(int i = 1; i < soLuongNV; i++)
        if(danhSachNV[max]->tinhLuong() < danhSachNV[i]->tinhLuong()) max = i;

    danhSachNV[max]->Xuat();
}

void QuanLy::XuatNVLuongThapNhat() const {
    std::cout << "\nXuat nhan vien luong thap nhat\n";

    int min = 0;

    for(int i = 1; i < soLuongNV; i++)
        if(danhSachNV[min]->tinhLuong() > danhSachNV[i]->tinhLuong()) min = i;

    danhSachNV[min]->Xuat();
}

void QuanLy::XuatLTVLuongCaoNhat() const {
    std::cout << "\nXuat lap trinh vien luong cao nhat\n";

    int max = -1;

    for(int i = 0; i < soLuongNV; i++) {
        if(danhSachNV[i]->loai == ltv) {
            if(max == -1 || danhSachNV[i]->tinhLuong() > danhSachNV[max]->tinhLuong()) max = i;
        }
    }

    danhSachNV[max]->Xuat();
}

void QuanLy::XuatKCVLuongThapNhat() const {
    std::cout << "\nXuat kiem chung vien thap nhat\n";

    int min = -1;

    for(int i = 0; i < soLuongNV; i++) {
        if(danhSachNV[i]->loai == kcv) {
            if(min == -1 || danhSachNV[i]->tinhLuong() < danhSachNV[min]->tinhLuong()) min = i;
        }
    }

    danhSachNV[min]->Xuat();
}

void QuanLy::Menu() {
    std::cout << "\n----------\n";
    std::cout << "1. Nhap vao danh sach nhan vien\n";
    std::cout << "2. Xuat danh sach nhan vien\n";
    std::cout << "3. Xuat danh sach cac nhan vien co luong thap hon muc luong trung binh\n";
    std::cout << "4. Xuat nhan vien luong cao nhat\n";
    std::cout << "5. Xuat nhan vien luong thap nhat\n";
    std::cout << "6. Xuat lap trinh vien luong cao nhat\n";
    std::cout << "7. Xuat kiem chung vien luong thap nhat\n";
    std::cout << "8. Thoat chuong trinh. Nhan phim 8\n";
    std::cout << "----------\n";
    std::cout << "Lua chon: ";
}

void QuanLy::Selection() {
    int choice = -1;

    Menu();
    std::cin >> choice;

    while(choice != 8) {
        switch(choice) {
            case 1: NhapDS(); break;
            case 2: XuatDS(); break;
            case 3: XuatDSNVLuongThap(); break;
            case 4: XuatNVLuongCaoNhat(); break;
            case 5: XuatNVLuongThapNhat(); break;
            case 6: XuatLTVLuongCaoNhat(); break;
            case 7: XuatKCVLuongThapNhat(); break;
            default: std::cout << "Yeu cau nhap lai. Lua chon khong hop le\n";
        }

        Menu();
        std::cin >> choice;
    }
}