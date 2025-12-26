#include <iostream>
using namespace std;

int tinhTong(int a, int b) {
    return a + b;
}

double tinhTrungBinh(int a, int b) {
    return (a + b) / 2.0; 
}

int main() {
    int a, b;

   
    cout << "Nh?p s? nguyên a: ";
    cin >> a;
    cout << "Nh?p s? nguyên b: ";
    cin >> b;

    
    int tong = tinhTong(a, b);
    cout << "T?ng c?a hai s? là: " << tong << endl;

    
    double trungBinh = tinhTrungBinh(a, b);
    cout << "Trung bình c?ng c?a hai s? là: " << trungBinh << endl;

    return 0;
}
