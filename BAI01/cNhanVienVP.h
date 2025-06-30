#ifndef CNHANVIENVP_H
#define CNHANVIENVP_H

#include <string>
#include "cNhanVien.h"

class cNhanVienVP : public cNhanVien {
private:
    int soNgayLamViec;

public:
    cNhanVienVP(); // Tuong duong cNhanVienVP() : cNhanVien()
    void Nhap();
    void Xuat() const;
    std::string getLoaiNV() const;
    void tinhLuong();
};

#endif