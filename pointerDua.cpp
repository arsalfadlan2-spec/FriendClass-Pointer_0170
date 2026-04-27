#include <iostream>
using namespace std;

class mahasiswa{
public:
    int nim;

    // constructor
    mahasiswa(int x){
        nim = x;
    }

    void shownim(){
        cout << "No Induk: " << nim << endl;
    }
};

int main(){
    mahasiswa *mhs = new mahasiswa(1); // pointer mhs

    mhs->nim = 2;
    mhs->shownim();

    delete mhs;

    return 0;
}