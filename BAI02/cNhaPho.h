#ifndef CNHAPHO_H
#define CNHAPHO_H

#include <string>
#include "cBDS.h"

class cNhaPho : public cBDS {
private:
    std::string loaiNha;
    std::string diaChi;

public:
    cNhaPho();
    void TinhThanhTien();
    void Nhap();
    void Xuat() const;
    std::string getLoaiBDS() const;
};

#endif