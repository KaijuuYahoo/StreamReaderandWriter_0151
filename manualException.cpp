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
        //blok ini akan di eksekusi
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    catch(...)
    {
        //jika selain integer maka block ini akan di eksekusi
        cout << "Default Pengecualian dieksekusi" << endl;
    }
    return 0;
}
