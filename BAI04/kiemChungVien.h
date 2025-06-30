#ifndef KIEMCHUNGVIEN_H
#define KIEMCHUNGVIEN_H

#include "nhanVien.h"

class kiemChungVien : public nhanVien {
    private:
        int soLoiPhatHien;

    public:
        kiemChungVien();
        void Nhap();
        void Xuat() const;
        double tinhLuong();
};

#endif