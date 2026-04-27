#include <iostream>
#include <string>
using namespace std;

class siswa;

class orang{
private:
    string nama;

public:
    friend class siswa;

    void setNama(string pNama){
        nama = pNama;
    }
};

class siswa{
private:
    int id;

public:
    void setId(int pId); // deklarasi

    void displayId(){
        cout << "ID   : " << id << endl;
    }

    void displayAll(orang &a){
        cout << "ID   : " << id << endl;
        cout << "Nama : " << a.nama << endl;
    }
};

// definisi method di luar class
void siswa::setId(int pId){
    id = pId;
}

int main(){
    orang joko;
    joko.setNama("Joko Kumat");

    siswa joko_siswa;
    joko_siswa.setId(1);

    joko_siswa.displayId();
    joko_siswa.displayAll(joko);

    return 0;
}