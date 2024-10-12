#ifndef M_H
#define M_H
#include <string>
using namespace std;
// M sýnýfý
class C {
private:
    string calisanad;
    string calisansoyad;
    int calisanyas;
    double calisanmaas;

public:
    C(string calisanad, string calisansoyad, int calisanyas, double calisanmaas);
    void setAd(string calisanad);
    string getAd() const;
    void setSoyad(string calisansoyad);
    string getSoyad() const;
    void setYas(int calisanyas);
    int getYas() const;
    void setMaas(double calisanmaas);
    double getMaas() const;
    bool operator==(const C& c) const;
    C& operator+=(double mik);
    C& operator-=(double mik);
    C& operator*=(double orn);
};

#endif
