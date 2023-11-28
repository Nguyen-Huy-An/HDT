#include <iostream>
#include <string>
#include <cassert>
#include <cstdlib>
using namespace std;

class XauKyTu {
private:
    string xau;
public:
    XauKyTu() {}

    XauKyTu(const string& str) {
        xau = str;
    }
    int Tinh() {
        int n = xau.length();
        int chiPhi = 0;
        for (int i = 0; i < n / 2; i++) {
            chiPhi += abs(xau[i] - xau[n - 1 - i]);
        }
        return chiPhi;
    }
    friend ostream& operator<<(ostream& os, const XauKyTu& xauKT);
    friend istream& operator>>(istream& is, XauKyTu& xauKT);
};
ostream& operator<<(ostream& os, const XauKyTu& xauKT) {
	//cout<<"N";
    os << xauKT.xau;
    return os;
}
istream& operator>>(istream& is, XauKyTu& xauKT) {
	//cout<<"M";
    is >> xauKT.xau;
    return is;
}
int main() {
    XauKyTu xau;
    cout << "";
    cin >> xau;
    assert(xau.Tinh() <= 105);
    int chiPhi = xau.Tinh();
    cout << "" << chiPhi << endl;
    return 0;
}
