#include <iostream>
#include <string>
using namespace std;

int main(){
    int waktu;
    int i = 1;
    string lampu[3] = {"hijau","kuning","merah"};
    int durasiLampu[3] = {20,3,80};
    cout << "mau tau warna lampu di detik ke berapa?\n";
    cin >> waktu;
    if(waktu<45)
    {cout<< "lampu belum nyala\n"; }
        else
    { waktu=waktu-45;
    while(waktu>0){
        waktu=waktu-durasiLampu[i];
        if(waktu>0){
            i++;
            if(i>2){
                i=0;
            }
        }
    }cout<<lampu[i]<<endl;}
}