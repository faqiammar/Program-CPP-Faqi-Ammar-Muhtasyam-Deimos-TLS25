#include <iostream>
#include <string>
using namespace std;

int main(){
    string sandi,kata,kata1;
    cout << "masukkan sandi\n";
    cin >> sandi;
    for(int i = 0;i<sandi.length();i++){
        if(sandi[i] == '1'|| sandi[i] == '2'||sandi[i] == '3'||sandi[i] == '4'||sandi[i] == '5'||sandi[i] == '6'||sandi[i] == '7'||sandi[i] == '8'||sandi[i] == '9'||sandi[i] == '0'){
        }else{
            kata1=kata1+sandi[i];
        }
    }
    for(int k = kata1.length()-1;k>=0;k--){
        kata=kata+kata1[k];
    }
    cout<<kata<<endl;
}