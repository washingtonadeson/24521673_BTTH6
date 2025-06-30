#ifndef CD_H
#define CD_H

#include <string>
#include "UIT.h"

class CD : public UIT {
    private:
        float diemThiTotNghiep;

    public:
        void Nhap();
        void Xuat() const;
        CD() : UIT(), diemThiTotNghiep(0.0f) {
            he = cd;
        };
        bool isDDK() const;
        float getDiemTB() const;
};

#endif