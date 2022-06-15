#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//global variable declaration
struct{
    char kode_brg[5];
    string nama_brg;
    bool expired;
}Barang[99];

void Input_barang(){
    int jumlah_brg;
    cout<<"Masukkan jumlah Barang : ";
    cin >> jumlah_brg;

    for (int i = 0; i < jumlah_brg; i++){
        cout<<"Input Barang - " << i+1 << " : "<<endl;
        cout<<"Kode barang\t :";
        cin>>Barang[i].kode_brg;
        cin.ignore();
        cout<<"Nama barang\t : ";
        cin>>Barang[i].nama_brg;
        cout<<"Expired barang\t : ";
        cin>>Barang[i].expired ;
    }
}

int main(){
    int menu;
    string exit ;
    bool isExit = false;

    do{
        system("cls");
        cout<<"================"<<endl;
        cout<<"    Aplikasi    "<<endl;
        cout<<"================"<<endl;
        cout<<"1. Input Data Mahasiswa"<<endl;
        cout<<"2. Hitung IPK"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"pilih opsi yang di inginkan : ";
        cin >> menu;
        switch (menu){
            case 1:
            Input_barang();
                break;
            case 2:
            goto keluar;
            default:
            cout<<"Menu Tidak Ada"<<endl;
                break;
        }

        cout<<"Ingin keluar ?  [y/n] ; " ;
        cin>>exit;

        isExit = exit == "y" ? true : false;
    } while (!isExit);

        keluar:

        
    
    return 0;
}