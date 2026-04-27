#include <iostream>
using namespace std;

class mahasiswa{
public:
    int nim;

    // Constructor
    mahasiswa(int x){
        nim = x;
    }

    void shownim(){
        cout << "No Induk: " << nim << endl;
    }
};

int main(){
    mahasiswa mhs(1); // objek mhs
    mhs.shownim();
}

int main (){
    mahasiswa mhs(1); // objek mhs
    mhs.shownim();

    mahasiswa &refmhs = mhs; // pointer refmhs
    refmhs.nim = 2; // member accsess operator
    refmhs.shownim();
    
    mahasiswa *pMhs = &mhs; // pointer pMhs
    pMhs->nim = 3; // operator panah
    pMhs->shownim();

}