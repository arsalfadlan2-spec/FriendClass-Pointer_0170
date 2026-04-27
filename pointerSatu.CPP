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