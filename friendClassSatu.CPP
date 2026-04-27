#include <iostream>
#include <string>
using namespace std;

class siswa; // forward declaration

class orang{
private:
    string nama;

public:
    friend class siswa; // friend class

    void setNama(string pNama){
        nama = pNama;
    }
};

class siswa{
private:
    int id;

public:
    void setId(int pId); // deklarasi

    void displayId(); // deklarasi

    void displayAll(orang &a); // deklarasi
};

// definisi method di luar class
void siswa::setId(int pId){
    id = pId;
}

void siswa::displayId(){
    cout << "ID   : " << id << endl;
}

void siswa::displayAll(orang &a){
    cout << "ID   : " << id << endl;
    cout << "Nama : " << a.nama << endl;
}

int main(){
    orang joko;
    siswa joko_siswa;

    joko.setNama("Joko Kumat");
    joko_siswa.setId(1);

    joko_siswa.displayId();
    joko_siswa.displayAll(joko);

    return 0;
}