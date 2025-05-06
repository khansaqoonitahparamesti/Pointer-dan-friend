#include <iostream>
using namespace std;

class mahasiswa {
    public :
    int nim ;
    void shownim(){
        cout << " No Induk =" << nim << endl;
    }
};

int main (){
    mahasiswa *mhs = new mahasiswa {1}; // pointer obeject mahasiswa
    mhs  -> nim ;
    mhs -> shownim ();
    delete mhs;
    return 0 ;
};