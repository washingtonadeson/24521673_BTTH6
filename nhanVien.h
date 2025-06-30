#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <string>

enum loaiNV {ltv, kcv};

class nhanVien {
    protected:
        std::string maNV;
        std::string hoTen;
        int tuoi;
        int soDT;
        std::string email;
        double luongCB;

    public:
        loaiNV loai;
        virtual ~nhanVien() {}
        nhanVien() : maNV(""), hoTen(""), tuoi(0), soDT(0), email(""), luongCB(0.0) {}
        virtual void Nhap() = 0;
        virtual void Xuat() const = 0;
        virtual double tinhLuong() = 0;
};

#endif