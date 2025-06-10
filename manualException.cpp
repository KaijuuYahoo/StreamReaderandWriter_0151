#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    try
    {
        cout <<"Selamat Belajar di Prodi TI UMY" <<endl;
        throw 0.5; //melemparkan sebuah integer maka
        cout <<"Pernyataan tidak akan dieksekusi" <<endl;
    }
    catch(int a)
    {
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    
    return 0;
}
