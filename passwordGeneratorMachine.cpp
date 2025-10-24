#include <iostream>
#include <string>
using namespace std;

int main(){
    string kata,sandi1,sandi2,sandi3,sandi4;
    int kode;
    char huruf[60] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int ASCII[60] = {65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
    cout << "masukkan kata\n";
    cin >> kata;
    for(int i = 0;i<kata.length();i++){
        if(kata[i] == 'a' || kata[i] == 'i' || kata[i] == 'u' || kata[i] == 'e' || kata[i] == 'o' || kata[i] == 'A' || kata[i] == 'I' || kata[i] == 'U' || kata[i] == 'E' || kata[i] == 'O'){
        }else{
            sandi1=sandi1+kata[i];
        }
    }
    for(int k = sandi1.length()-1;k>=0;k--){
        sandi2=sandi2+sandi1[k];
    }
    if(sandi2.length()%2==0){
        for(int l = 0;l<sandi2.length();l++){
            if(l<((sandi2.length()-1)/2)+1){
                sandi3=sandi3+sandi2[l];
            }else{
                sandi4=sandi4+sandi2[l];
            }
        }
    }else{
        for(int m=0;m < sandi2.length();m++){
            if(m<((sandi2.length())/2)+1){
                sandi3=sandi3+sandi2[m];
            }else{
                sandi4=sandi4+sandi2[m];
            }

        }
    }
    for(int n =0;n<sizeof(huruf);n++){
        if(sandi4[sandi4.length()-1]==huruf[n]){
            kode=ASCII[n];
        }
    }
    cout<<sandi3<<kode<<sandi4<<endl;
}