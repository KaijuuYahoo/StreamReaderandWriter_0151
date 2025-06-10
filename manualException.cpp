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
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
