#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double r) {
    if (r >= 80) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

string status2(double r, double n) {
    if (r >= 70 && n >= 80) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

string status3(double r, double n) {
    if (r >= 60 || n >= 70) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

int main() {
    double nilaiMath, nilaiBahasainggris;

    cout << "masukkan nilai math";
    cin >> nilaiMath;
    cout << "masukkan nilai bahasa";
    cin >> nilaiBahasainggris;

    cout << "Nilai rata - rata nya : " << rerata(nilaiMath, nilaiBahasainggris);
    cout << "\nStatus kelulusannya : " << status(rerata(nilaiMath, nilaiBahasainggris));
    cout << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBahasainggris), nilaiMath);
    cout << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBahasainggris), nilaiMath);




}