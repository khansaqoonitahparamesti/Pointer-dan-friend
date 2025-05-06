#include <iostream>
using namespace std ;

class mahasiswa {
    public :
    int nim ;
    void shownim(){
        cout << "No Induk =" << nim << endl;
    }
};

int main (){
    mahasiswa mhs{1}; // object mhs dari class mahasiswa
    mhs.shownim();

    mahasiswa &refMhs = mhs; // pointer refernce refmhs
    refMhs.nim = 2;
    mhs.shownim();
    
    mahasiswa *pMhs = &mhs; // pointer deference
    pMhs->nim = 3;
    pMhs-> shownim();

    return 0;
}