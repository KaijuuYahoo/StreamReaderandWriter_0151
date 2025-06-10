#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string baris;
    string NamaFile;

    cout << "Masukkan nama file : ";
    cin >> NamaFile;
    //Membuka file dalam mode penulisan
    ofstream outfile;
    //Menunjuk nama file tujuan
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis file, \'q\' untuk keluar" <<endl;
    while (true)
    {
        cout << "- ";
        //Mendapatkan baris setiap karakter dalam 1 baris
        getline(cin,baris);
        //Loop akan berhenti apabila menuliskan karakter q
        if (baris=="q") break;
        //Menulis dan Memasukkan nilai dari 'baris' ke dalam file 
        outfile<< baris <<endl;
    }
    //selesai dalam menulis dan menutup file 
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile; 
    //Menunjuk ke sebuah file tujuan
    infile.open(NamaFile + ".txt", ios::in);
    cout << ">= Membuka dan membaca file" << endl;
    //jika file ada
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile,baris))
        {
            cout << baris << endl;
        }
        infile.close();     
    }
    else cout <<"Unable to open file";
    return 0;
}
