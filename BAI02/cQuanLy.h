#ifndef CQUANLY_H
#define CQUANLY_H

#include <vector>
#include "cBDS.h"

class cQuanLy {
private:
    std::vector<cBDS*> list;

public:
    ~cQuanLy();
    void Menu();
    void NhapDS();
    void XuatDS() const;
    void tinhTongSLTungLoai() const;
    void tinhTBThanhTienCHCC() const;
    void XuatThongTinNhaPhoGiaTriCaoNhat() const;
    void XuatDSCacGDThang12Nam2024() const;
};

#endif