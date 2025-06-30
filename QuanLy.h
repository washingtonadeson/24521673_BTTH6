#ifndef QUANLY_H
#define QUANLY_H

#include "UIT.h"
#include "CD.h"
#include "DH.h"

class QuanLy {
    private:
        UIT* list[10];
        int index;

    public:
        QuanLy();
        ~QuanLy();
        void NhapDS();
        void XuatDS() const;
        void XuatDSDDK() const;
        void XuatDSKhongDDK() const;
        void XuatSinhVienDHDiemTBCaoNhat() const;
        void XuatSinhVienCDDiemTBCaoNhat() const;
        void XuatSoLuongSinhVienKhongDDK() const;
        void Menu();
};

#endif