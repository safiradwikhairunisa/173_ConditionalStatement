#include <iostream>
using namespace std;

double alas, tinggi;

void procedurInput(){
    cout << "Masukkan Nilai alas : ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi : ";
    cin >> tinggi;
}

double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}

string ukuranSegitiga (double l){
    //Jika luas > 60
    if (l > 60){
        return "Besar";
    }
    else{
        return "Kecil";
    }
}

 void procedurOutput2(){
    cout << "luas Segitiga = " << ukuranSegitiga(hitungLuas2{alas, tinggi}) << endl;
 }

 int main(){
    procedurInput();
    procedurOutput();
    procedurOutput2();
 }