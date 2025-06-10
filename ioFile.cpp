#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string baris;
    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << ">= Menulis file, \'q\' untuk keluar" <<endl;
    //Unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        //Mendapatkan baris setiap karakter dalam 1 baris
        getline(cin,baris);
        //Loop akan berhenti apabila menuliskan karakter q
        if (baris=="q") break;
        outfile<< baris <<endl;
    }
    outfile.close();

    ifstream infile; 

    //Menunjuk ke sebuah file 
    infile.open("contohfile.txt");
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
