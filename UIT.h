#ifndef UIT_H
#define UIT_H

#include <string>


class UIT {
    protected:
        int mssv;
        std::string hoTen;
        std::string diaChi;
        int tongSoTC;
        float diemTB;
    
    public:
        enum loaiUIT {
            dh,
            cd
        };
        
        loaiUIT he;
        virtual ~UIT() {}
        UIT() : mssv(0), hoTen(""), diaChi(""), tongSoTC(0), diemTB(0.0f) {
            he = dh;
        }
        virtual void Nhap() = 0;
        virtual void Xuat() const = 0;
        virtual bool isDDK() const = 0;
        virtual float getDiemTB() const = 0;
};

#endif