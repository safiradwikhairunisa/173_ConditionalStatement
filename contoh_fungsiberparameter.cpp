#include <iostream>
using namespace std;

double alas, tinggi;

void procedurInput(){
    cout << "Masukkan Nilai alas : ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi : ";
    cin >> tinggi;
}

double hitungLuas(){
    return 0.5 * alas * tinggi;
}
double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}

 void procedurOutput(){
    cout << "luas Segitiga = " << hitungLuas << endl;
 }

 void procedurOutput2(){
    cout << "luas Segitiga = " << hitungLuas2(alas, tinggi) << endl;
 }
 int main(){
    procedurInput();
    procedurOutput();
    procedurOutput2();
 }