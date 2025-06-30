#ifndef DH_H
#define DH_H

#include "UIT.h"

class DH : public UIT {
    private:
        std::string tenLuanVan;
        float diemLuanVan;

    public:
        void Nhap();
        void Xuat() const;
        DH() : UIT(), tenLuanVan(""), diemLuanVan(0.0f) {
            he = dh;
        };
        bool isDDK() const;
        float getDiemTB() const;
};

#endif