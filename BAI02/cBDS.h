#ifndef CBDS_H
#define CBDS_H

#include <string>

class cBDS {
protected:
    std::string maGiaoDich;
    int ngayGiaoDich;
    float donGia;
    float dienTich;
    float thanhTien;

public:
    virtual ~cBDS();
    cBDS();
    virtual void TinhThanhTien() = 0;
    virtual void Nhap() = 0;
    virtual void Xuat() const = 0;
    virtual std::string getLoaiBDS() const = 0;

    void NhapThongTinChung();
    void XuatThongTinChung() const;
    int getNgay() const;
    int getThang() const;
    int getNam() const;
    float getThanhTien() const;
};

#endif