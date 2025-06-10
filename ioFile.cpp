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

        if (baris=="q") break;
        outfile<< baris <<endl;
    }
    outfile.close();
    ifstream infile; 
    return 0;
}
