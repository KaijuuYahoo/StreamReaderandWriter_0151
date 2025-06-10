#include<iostream>
#include<exception>
#include<array>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Awal Program " << endl; //penanda 1:...
    try
    {
        array <int,3> data={10,20,30};
        //pesan array integer 3 elemen
        cout << data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}
