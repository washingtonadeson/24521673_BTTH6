#ifndef CCHCC_H
#define CCHCC_H

#include <string>
#include "cBDS.h"

class cCHCC : public cBDS {
private:
    std::string maCan;
    int viTriTang;

public:
    cCHCC();
    void TinhThanhTien();
    void Nhap();
    void Xuat() const;
    std::string getLoaiBDS() const;
};

#endif