#ifndef QUANLY_H
#define QUANLY_H

#include "nhanVien.h"
#include "lapTrinhVien.h"
#include "kiemChungVien.h"

class QuanLy {
    private:
        nhanVien** danhSachNV;
        int soLuongNV;

    public:
        QuanLy() : danhSachNV(nullptr), soLuongNV(0) {}
        ~QuanLy();
        void NhapDS();
        void XuatDS() const;
        void XuatDSNVLuongThap() const;
        void XuatNVLuongCaoNhat() const;
        void XuatNVLuongThapNhat() const;
        void XuatLTVLuongCaoNhat() const;
        void XuatKCVLuongThapNhat() const;
        void Menu();
        void Selection();
};

#endif