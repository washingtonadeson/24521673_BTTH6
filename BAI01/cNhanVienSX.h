#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H

#include <string>
#include "cNhanVien.h"

class cNhanVienSX : public cNhanVien {
private:
    float luongCB;
    int soSanPham;

public:
    cNhanVienSX();
    void Nhap();
    void Xuat() const;
    std::string getLoaiNV() const;
    void tinhLuong();
};

#endif