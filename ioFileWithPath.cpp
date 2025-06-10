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
    cout <<
    return 0;
}
