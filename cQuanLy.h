#ifndef CQUANLY_H
#define CQUANLY_H

#include "cNhanVien.h"
#include "cNhanVienVP.h"
#include "cNhanVienSX.h"

class cQuanLy {
private:
    cNhanVien* list[10];
    int index;

public:
    cQuanLy();
    ~cQuanLy();
    void NhapDS();
    void XuatDS() const;
    void tinhLuongChoNV() const;
    float tinhTongLuong() const;
    void XuatNVSXLuongThapNhat() const;
    void XuatNVVPTuoiCaoNhat() const;
    void Menu();
};

#endif