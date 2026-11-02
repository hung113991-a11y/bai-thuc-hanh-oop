#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Vehicle {
private:
    int ma_xe;
    string loai_xe;
    int gio_vao;
    int tg_do;

public:
    phuong_tien();
    phuong_tien(int ma, string loai, int gio, int tg);

    int lay_ma_xe() const;
    string lay_loai_xe() const;
    double tinh_phi() const;
    void hien_thi() const;
};

class ParkingLot {
private:
    int ma_bai;
    char kich_thuoc;
    phuong_tien pt1, pt2, pt3;
    bool co1, co2, co3;

public:
    bai_xe();
    bai_xe(int ma, char kt);

    int lay_ma() const;
    bool them(phuong_tien v);
    bool xoa(int ma_xe);
    bool chua(int ma_xe) const;
    void hien_thi() const;
    bool co_loai(string loai, int& dem, double& tong) const;
};

class SystemInterface {
private:
    bai_xe bai1, bai2, bai3;   
    bool co1, co2, co3;

public:
    SystemInterface();
    void runMenu();
};
