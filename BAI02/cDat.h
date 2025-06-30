#ifndef CDAT_H
#define CDAT_H

#include <string>
#include "cBDS.h"

class cDat : public cBDS {
private:
    char loaiDat;

public:
    cDat();
    void TinhThanhTien();
    void Nhap();
    void Xuat() const;
    std::string getLoaiBDS() const;
};

#endif
