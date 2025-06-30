#ifndef LAPTRINHVIEN_H
#define LAPTRINHVIEN_H

#include "nhanVien.h"

class lapTrinhVien : public nhanVien {
    private:
        int soGioOvertime;

    public:
        lapTrinhVien();
        void Nhap();
        void Xuat() const;
        double tinhLuong();
};

#endif