#include <iostream>
using namespace std;

class PersegiPanjang 
{
    public: 
        int Panjang, Lebar;

    public:
        void input (){
            cout <<"Masukkan panjang :" ;
            cin >> Panjang;
            cout << "Masukkan Lebar :";
            cin >> Lebar;
        }

        int luasPp(int a, int b){
            return a * b;
        }

        //lingkaran ol;
};

class lingkaran {
    public :
        int jarijari;

        void input (){
            cout << "Masukkan jari-jari :";
            cin >> jarijari;
        }

        int luaslingkaran (int r){
            return 3.14 * r * r ;
        }
};

int main( ) {
    PersegiPanjang objekpp; 
    lingkaran ol
}